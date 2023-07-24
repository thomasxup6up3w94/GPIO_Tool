from flask import Flask, request, jsonify, render_template
from flask import redirect
import getpass
import webbrowser
import subprocess
import re
import os
import sqlite3
# app = Flask(__name__)
# 设置模板文件夹路径
# template_dir = os.path.join(os.path.dirname(__file__), '.venv')
# app.template_folder = template_dir
app = Flask(__name__, template_folder=os.path.join(os.path.dirname(__file__), 'html'))

# 添加路由和其他 Flask 相关的代码
# app.template_folder = os.path.join(os.path.dirname(__file__), 'html')

@app.route('/')
def index():
    return render_template('login3.html')

@app.route('/login3.html')
def login():
    return render_template('login3.html')

@app.route('/GPIOtool4.html')
def gpio_tool4():
    return render_template('GPIOtool4.html')

@app.route('/GPIOtool5.html')
def gpio_tool5():
    return render_template('GPIOtool5.html')

@app.route('/AdminPage3.html')
def admin_page():
    # db = sqlite3.connect('./AdminAccess.db')
    db_path = os.path.join(os.getcwd(), 'AdminAccess.db')
    db = sqlite3.connect(db_path)
    cursor = db.cursor()
    cursor.execute("CREATE TABLE IF NOT EXISTS user (username TEXT, accessLevel TEXT)")
    cursor.execute('SELECT username, accessLevel FROM user')
    rows = cursor.fetchall()
    # data = [{'name': row[0], 'Access': row[1]} for row in rows]
    arr = []
    for row in rows:
        name = row[0]
        access = row[1]
        item = {'name': name, 'Access': access}
        print("Name: {}, Access: {}".format(name, access))
        arr.append(item)
    print(arr)
    db.close()
    return render_template('AdminPage3.html', arr=arr)

@app.route('/loginForm', methods=['POST'])
def loginForm():
    # 取得輸入的帳號密碼
    username = request.form['username']
    password = request.form['password']
    # signinaccess = request.form['db']
    signinaccess = request.form.get('db', False)  # 如果未选择权限，则默认为 False

    if signinaccess == 'db':
        # 建立或连接数据库
        import sqlite3
        conn = sqlite3.connect('./AdminAccess.db')
        cursor = conn.cursor()

        # 创建user表
        cursor.execute("CREATE TABLE IF NOT EXISTS user (username TEXT, accessLevel TEXT)")

        # 查询用户和访问级别
        cursor.execute('SELECT * FROM user WHERE username = ? AND accessLevel = ?', (username, '0'))
        rows = cursor.fetchall()
        if len(rows) > 0:
            # 执行net use命令
            import subprocess
            domain = '127.0.0.1'
            domain1 = 'MSI'
            net_use_command = ['net', 'use', f'\\\\{domain}\\IPC$', f'/user:{domain1}\\{username}', password]
            net_use_process = subprocess.Popen(net_use_command, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            stdout, stderr = net_use_process.communicate()

            if net_use_process.returncode == 0:
                return redirect('/AdminPage3.html')
            else:
                return jsonify('密碼錯誤'), 401
        else:
            cursor.execute('SELECT username FROM user WHERE username = ?', (username,))
            rows = cursor.fetchall()
            if len(rows) > 0:
                cursor.execute('SELECT accessLevel FROM user WHERE username = ?', (username,))
                row = cursor.fetchone()
                if row is None:
                    return jsonify('查無此人權限'), 400
                elif row[0] != '0':
                    return jsonify('權限不足'), 403
                else:
                    # 处理其他操作或跳转页面
                    pass
            else:
                return jsonify('查無此人權限'), 400

        conn.close()
    else:
        # 建立或连接数据库
        import sqlite3
        conn = sqlite3.connect('./AdminAccess.db')
        cursor = conn.cursor()

        # 创建user表
        cursor.execute("CREATE TABLE IF NOT EXISTS user (username TEXT, accessLevel TEXT)")

        # 查询用户
        cursor.execute('SELECT * FROM user WHERE username = ?', (username,))
        rows = cursor.fetchall()
        if len(rows) > 0:
            # 执行net use命令
            import subprocess
            domain = '127.0.0.1'
            domain1 = 'MSI'
            net_use_command = ['net', 'use', f'\\\\{domain}\\IPC$', f'/user:{domain1}\\{username}', password]
            net_use_process = subprocess.Popen(net_use_command, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
            stdout, stderr = net_use_process.communicate()

            if net_use_process.returncode == 0:
                queries = [
                    {'accessLevel': '0', 'redirectPage': '/GPIOtool4.html'},
                    {'accessLevel': '1', 'redirectPage': '/GPIOtool4.html'},
                    {'accessLevel': '2', 'redirectPage': '/GPIOtool5.html'},
                    {'accessLevel': '3', 'redirectPage': '/GPIOtool5.html'}
                ]

                for query in queries:
                    cursor.execute('SELECT * FROM user WHERE username = ? AND accessLevel = ?',
                                   (username, query['accessLevel']))
                    rows = cursor.fetchall()
                    if len(rows) > 0:
                        return redirect(query['redirectPage'])

                # Handle other cases if needed
            else:
                return jsonify('密碼錯誤'), 401
        else:
            return jsonify('查無此人權限'), 403

        conn.close()

# 处理POST请求，验证帐号密码
@app.route('/addData', methods=['POST'])
def add_data():
    # 取得输入的帐号密码
    new_data = request.json  # 从前端传送的新增数据
    name = new_data.get('name')
    access = new_data.get('Access')

    db = sqlite3.connect('./AdminAccess.db')
    cursor = db.cursor()

    # 检查SQLite数据库中是否已存在相同的name值
    cursor.execute('SELECT * FROM user WHERE username = ?', (name,))
    row = cursor.fetchone()
    if row:
        # 数据库中已存在相同的name值
        return jsonify(error='Name already exists'), 400

    # 数据库中没有相同的name值，将数据插入到数据库
    cursor.execute('INSERT INTO user (username, accessLevel) VALUES (?, ?)', (name, access))
    db.commit()

    cursor.close()
    db.close()

    return jsonify(message='Data inserted')


# 处理删除请求
@app.route('/delete', methods=['POST'])
def delete_data():
    data = request.json  # 从请求主体中获取数据
    name = data.get('name')

    db = sqlite3.connect('./AdminAccess.db')
    cursor = db.cursor()

    # 查询数据库
    cursor.execute('SELECT * FROM user WHERE username = ?', (name,))
    row = cursor.fetchone()
    if row:
        # 数据库中已存在相同的name值
        cursor.execute('DELETE FROM user WHERE username = ?', (name,))
        db.commit()
        cursor.close()
        db.close()
        return jsonify(message='User deleted')

    cursor.close()
    db.close()

    return jsonify(error='User not found'), 400


# 处理修改请求
@app.route('/revise', methods=['POST'])
def revise_data():
    data = request.json  # 从请求主体中获取数据
    name = data.get('name')
    access = data.get('Access')

    db = sqlite3.connect('./AdminAccess.db')
    cursor = db.cursor()

    # 查询数据库
    cursor.execute('SELECT * FROM user WHERE username = ?', (name,))
    row = cursor.fetchone()
    if row:
        # 数据库中已存在相同的name值
        if row[1] != access:
            # 更新访问级别
            cursor.execute('UPDATE user SET accessLevel = ? WHERE username = ?', (access, name))
            db.commit()
            cursor.close()
            db.close()
            return jsonify(message='Access level updated')

    cursor.close()
    db.close()

    return jsonify(error='User not found'), 400

@app.route('/csvdata', methods=['POST'])
def handle_csvdata():
    data = request.json
    csvContent = data['csvContent']
    outputFile1 = data['outputFile1']
    csvFileName = data['csvFileName']

    filePath = f"./.venv/GpioPinsFile/{csvFileName}.txt"

    with open(filePath, 'r') as file:
        tableData = file.read()

    filecontent = csvToCode1(csvContent, tableData)

    result = {
        'filecontent': filecontent,
        'csvContent': csvContent,
        'tableData': tableData
    }

    return jsonify(result)

@app.route('/csvdata1', methods=['POST'])
def handle_csvdata1():
    data = request.json
    hfileContent = data['hfileContent']
    outputFile = data['outputFile']

    finalString1 = hfileoutputname(hfileContent)
    filePath = f"./.venv/GpioPinsFile/{finalString1}.txt"

    with open(filePath, 'r') as file:
        tableData = file.read()

    csvcontent2 = htogetcsvifo(hfileContent, tableData, finalString1)
    filecontent = csvToCode1(csvcontent2, tableData)

    result = {
        'filecontent': filecontent,
        'csvcontent2': csvcontent2,
        'tableData': tableData
    }

    return jsonify(result)

@app.route('/csvdata2', methods=['POST'])
def handle_csvdata2():
    data = request.json
    csvContent = data['csvContent']
    outputFile1 = data['outputFile1']
    csvFileName = data['csvFileName']

    filePath = f"./.venv/GpioPinsFile/{csvFileName}.txt"

    with open(filePath, 'r') as file:
        tableData = file.read()

    result = {
        'csvContent': csvContent,
        'tableData': tableData
    }

    return jsonify(result)

DESIRED_KEYS = [
    "[GPIO Pin]",
    "[Pad Mode]",
    "[Host Soft Owner]",
    "[Direction]",
    "[Output State]",
    "[Interrupt Configuration]",
    "[Reset Configuration]",
    "[Electrical Configuration]",
    "[Lock Status]",
    "[None]"
]

def getCSVContentInfo(csvContent, tableData):
    lines = csvContent.strip().split("\n")
    array = []
    array1 = []

    for line in lines:
        lineItems = [item.strip() for item in line.split(",")]

        if len(lineItems) < 9:
            diff = 9 - len(lineItems)
            lineItems.extend([""] * diff)

        if lineItems[8] == "":
            lineItems[8] = ""

        array.append(lineItems)
        array1.append(lineItems)

    for j in range(1, len(lines)):
        columnCount1 = 0

        for k in range(9):
            if re.match(".*[a-zA-Z].*[a-zA-Z].*", array[j][k]):
                columnCount1 += 1

        for k in range(columnCount1):
            m = k
            resetConfigStart = tableData.index(DESIRED_KEYS[m])
            resetConfigEnd = tableData.index(DESIRED_KEYS[m + 1])
            resetConfigString = tableData[resetConfigStart:resetConfigEnd].strip()
            keyValuePairs = []

            regex = r"^\s*([^=\[\]]+)\s*=\s*([^=\[\]]+)\s*$"
            matches = re.findall(regex, resetConfigString, re.MULTILINE)

            for match in matches:
                key = match[0].strip()
                value = match[1].strip()
                pair = [key, value]
                keyValuePairs.append(pair)

            keys = [pair[0] for pair in keyValuePairs]
            values = [pair[1] for pair in keyValuePairs]

            for n in range(len(keys)):
                if keys[n] == array[j][k]:
                    array1[j][k] = values[n]
                    break
                # if n == len(keys) - 1 and keys[n] != array[j][k]:
                #     array1[j][k] = "error"

    return array1

def csvToCode1(csvContent, tableData):
    return getCSVContentInfo(csvContent, tableData)


def htogetcsvifo(hfileContent, tableData, finalString1):
    desiredKeys1 = [
        "[GPIO Pin]",
        "[Pad Mode]",
        "[Host Soft Owner]",
        "[Direction]",
        "[Output State]",
        "[Interrupt Configuration]",
        "[Reset Configuration]",
        "[Electrical Configuration]",
        "[Lock Status]",
        "[None]"
    ]

    lines = hfileContent.split("\n")
    filteredLines = []
    for line in lines:
        line = line.strip()
        if line.startswith("{") and len(line) > 1 and not line.startswith("{0x0"):
            index = line.index("}")
            line = line[:index].strip() if index != -1 else line.strip()
            filteredLines.append(line)

    outputString = "\n".join(filteredLines)
    lines1 = outputString.split("\n")
    resultArray1 = []
    resultArray = []

    for line in lines1:
        trimmedLine = line.replace("{", "").replace("}", "").strip()
        if trimmedLine:
            resultArray.append(trimmedLine.split(","))
            resultArray1.append(trimmedLine.split(","))

    for l in range(len(lines1)):
        columnCount = len(resultArray[l])
        for k in range(columnCount):
            m = k
            resetConfigStart = tableData.index(desiredKeys1[m])
            resetConfigEnd = tableData.index(desiredKeys1[m + 1])
            resetConfigString = tableData[resetConfigStart:resetConfigEnd].strip()

            keyValuePairs = {}
            regex = r"\s*([^=\[\]]+)\s*=\s*([^=\[\]]+)\s*"
            linesMatch = resetConfigString.split("\n")

            for line in linesMatch:
                line = line.strip()
                if re.match(regex, line):
                    key, value = line.split("=")
                    key = key.strip()
                    value = value.strip()
                    keyValuePairs[key] = value

            keys = list(keyValuePairs.keys())
            values = list(keyValuePairs.values())

            for n in range(len(keys)):
                if resultArray[l][k] in values[n]:
                    resultArray1[l][k] = keys[n]
                    break

    desiredKeys2 = [
        "GPIO Pin",
        "Pad Mode",
        "Host Soft Owner",
        "Direction",
        "Output State",
        "Interrupt Configuration",
        "Reset Configuration",
        "Electrical Configuration",
        "Lock Status"
    ]

    finalArray = [desiredKeys2] + resultArray1

    csvContent = ""
    for row in finalArray:
        csvContent += ",".join(row) + "\n"

    username = getpass.getuser()
    filePath1 = f"C:/Users/{username}/Downloads/{finalString1}.csv"
    try:
        with open(filePath1, "w") as f:
            f.write(csvContent)
        print("CSV file saved successfully.")
    except IOError as e:
        print(f"Error writing CSV file: {e}")

    return csvContent

def hfileoutputname(hfileContent):
    lines = hfileContent.split('\n')
    filteredLines = [line for line in lines if re.match(r'\s*{[^0x0]', line) and len(line.strip()) > 1]
    filteredLines = [re.sub(r'}.*$', '', line).strip() for line in filteredLines]
    outputString = '\n'.join(filteredLines)
    lines1 = outputString.split('\n')
    resultArray = []
    resultArray1 = []
    for line in lines1:
        trimmedLine = re.sub(r'[{\s]+', '', line)
        if trimmedLine != '':
            lineArray = trimmedLine.split(',')
            resultArray.append(lineArray)
            resultArray1.append(lineArray)
    for k in range(len(lines1)):
        line = resultArray[k][0]
        firstUnderscoreIndex = line.index('_')
        secondUnderscoreIndex = line.index('_', firstUnderscoreIndex + 1)
        thirdUnderscoreIndex = line.index('_', secondUnderscoreIndex + 1) if '_' in line[(secondUnderscoreIndex + 1):] else -1
        if thirdUnderscoreIndex != -1:
            resultArray1[k][0] = line[:thirdUnderscoreIndex + 1]
        else:
            print('未找到第二個底線')
    gpioPin = findMajorityValue(resultArray1, lines1)
    print(gpioPin)
    prefix = "Gpio"
    suffix = "PinsVer"
    parts = gpioPin.split("_")
    digit = parts[1][3:]
    letter = parts[2]
    finalString = prefix + suffix + digit + letter
    print(finalString)
    return finalString

def findMajorityValue(resultArray1, lines1):
    countMap = {}
    for line in range(len(lines1)):
        value = resultArray1[line][0]
        countMap[value] = countMap.get(value, 0) + 1
    halfCount = len(lines1) // 2
    for value, count in countMap.items():
        if count > halfCount:
            return value
    return None

# @app.route('/')
# def hello():
#     return 'Hello, world!'

if __name__ == '__main__':
    # app.run(debug=True)
    app.run(port=3000)