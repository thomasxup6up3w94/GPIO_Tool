const express = require('express');
const sqlite3 = require('sqlite3').verbose();
const bodyParser = require('body-parser');
const ejs = require('ejs');
// const { exec } = require('child_process');
const { spawn } = require('child_process');
var favicon = require('serve-favicon');                             /*serve-favicon 模組來設置網頁的 favicon 圖標。*/
const urlLib = require('url');
const path = require('path');
const app = express();
const fs = require('fs');
var os = require("os")

app.set('view engine', 'ejs');
// app.set('views', path.join(__dirname, '/'));
app.set('views', path.join(__dirname, 'html'));
// app.set('views', path.join(__dirname, '..', 'html'));
// 解析POST請求的body
app.use(bodyParser.urlencoded({ extended: false }));                        /*這段程式碼是在使用Express框架中設定中介軟體(bodyParser)。bodyParser是一個解析HTTP請求主體的中介軟體，它支援解析urlencode、JSON和multipart等格式的請求主體。在這個例子中，使用urlencoded來解析請求主體。其中，extended設定為false表示解析的資料中不包含複雜的資料型態，例如陣列或物件。 */ /*urlencoded是一種將表單數據編碼為URL搜索參數的編碼方式。在Node.js中，body-parser中間件提供了urlencoded解析功能，可以將URL編碼的表單數據解析成JavaScript對象。通常，我們在處理來自表單提交的數據時會使用urlencoded解析。 */
// 路由處理
app.use(bodyParser.json());
// app.use('/static', express.static('image'));
// 配置静态文件的访问路径
app.use(express.static(path.join(__dirname, 'image')));
// app.use(express.static(path.join(__dirname, '..', 'image')));
// app.use(express.static(__dirname + '/image')); //Serves resources from public folder
// app.use(express.static('image'));
// app.use('/static', express.static(path.join(__dirname, 'image')));          /*這段程式碼的意思是：當瀏覽器訪問網站的 /favicon.ico 路徑時，將會從 image 資料夾中取得 favicon.ico 圖示檔案並顯示在瀏覽器上。而 __dirname 表示當前程式碼所在的目錄路徑，因此可以保證找到 image 資料夾的正確位置。 */
// 設置favicon.ico路由
// app.get('/getdata', (req, res) => {
//     res.sendFile(path.join(__dirname, 'image', 'msi_icon.ico'));
// });

// 處理GET請求，回傳HTML登入頁面
app.get('/', function (req, res) {
    // res.sendFile(__dirname + '/login3.html');                                /*__dirname代表目前檔案所在的目錄路徑 */
    res.sendFile(__dirname + '/html/login3.html');                                /*__dirname代表目前檔案所在的目錄路徑 */
    // res.sendFile(path.resolve(__dirname, '../html/login3.html'));
});
app.get('/login3.html', function (req, res) {
    // res.sendFile(__dirname + '/login3.html');
    res.sendFile(__dirname + '/html/login3.html');                                /*__dirname代表目前檔案所在的目錄路徑 */
    // res.sendFile(path.resolve(__dirname, '../html/login3.html'));
});
app.get('/GPIOtool4.html', function (req, res) {
    // res.sendFile(__dirname + '/GPIOtool0.html');
    res.sendFile(__dirname + '/html/GPIOtool4.html');                                /*__dirname代表目前檔案所在的目錄路徑 */
    // res.sendFile(path.resolve(__dirname, '../html/GPIOtool4.html'));
});
app.get('/GPIOtool5.html', function (req, res) {
    // res.sendFile(__dirname + '/GPIOtool0.html');
    res.sendFile(__dirname + '/html/GPIOtool5.html');                                /*__dirname代表目前檔案所在的目錄路徑 */
    // res.sendFile(path.resolve(__dirname, '../html/GPIOtool4.html'));
});
app.get('/AdminPage3.ejs', function (req, res) {
    // res.sendFile(__dirname + '/AdminPage3.ejs');
    // 開啟 SQLite 資料庫連線
    // let db = new sqlite3.Database(path.join(__dirname, '..', 'AdminAccess.db'), sqlite3.OPEN_READWRITE, (err) => {
    let db = new sqlite3.Database('./AdminAccess.db', sqlite3.OPEN_READONLY, (err) => {
        if (err) {
            console.error(err.message);
        }
        console.log('Connected to the AdminAccess database.');
    });
    db.run("CREATE TABLE IF NOT EXISTS user (username TEXT,accessLevel TEXT)");
    // 查询数据
    db.all('SELECT username, accessLevel FROM user', (err, rows) => {
        if (err) {
            console.error(err.message);
            // 处理错误
        } else {
            // 处理查询结果
            // 处理查询结果
            const data = rows.map((row) => ({
                name: row.username,
                Access: row.accessLevel
            }));
            // 渲染视图并传递数据
            res.render('AdminPage3.ejs', { arr: data });
        }
    });
});
// 處理POST請求，驗證帳號密碼
app.post('/loginForm', function (req, res) {
    // 取得輸入的帳號密碼
    const username = req.body.username;
    const password = req.body.password;
    const signinaccess = req.body.db;
    if (signinaccess == 'db') {
        // const db = new sqlite3.Database('//cmit/Internal/Innovation/Thomas/msi_cps.db', sqlite3.OPEN_READWRITE, (error) => {
        const db = new sqlite3.Database('./AdminAccess.db', sqlite3.OPEN_READWRITE, (error) => {         /*在連接資料庫時，使用的是 sqlite3.Database 方法，其中第一個參數是資料庫的檔案路徑，第二個參數是開啟資料庫的模式，此處為 OPEN_READWRITE 表示讀寫模式。第三個參數是一個 callback 函式，在資料庫連接完成後會被呼叫。 */
            // let db = new sqlite3.Database(path.join(__dirname, '..', 'AdminAccess.db'), sqlite3.OPEN_READWRITE, (error) => {
            if (error) {
                console.error(error.message);
            } else {
                console.log('Connected to the database.');
            }
        });
        db.run("CREATE TABLE IF NOT EXISTS user (username TEXT,accessLevel TEXT)");
        db.all('SELECT * FROM user WHERE username = ? AND accessLevel = ?', [username, 0], (err, rows) => {
            if (err) {
                console.error(err.message);
            }
            // 處理查詢結果
            console.log(rows);
            if (rows.length > 0) {
                const { spawn } = require('child_process');
                // 輸入網域、使用者名稱和密碼
                const domain = '127.0.0.1';
                const domain1 = 'MSI';
                // 建立 net use 命令
                const netUse = spawn('net', ['use', `\\\\${domain}\\IPC$`, `/user:${domain1}\\${username}`, password]);
                // 監聽 stdout 和 stderr
                netUse.stdout.on('data', (data) => {
                    console.log(`stdout: ${data}`);
                });
                netUse.stderr.on('data', (data) => {
                    console.error(`stderr: ${data}`);
                });
                // 監聽執行結束事件
                netUse.on('close', (code) => {
                    if (code === 0) {
                        // sendResponse('AdminPage.html', 200, response);
                        // res.sendFile(__dirname + '/AdminPage.html');
                        res.redirect('/AdminPage3.ejs');
                        // 登入成功，跳轉至 Yahoo 首頁
                        // const { exec } = require('child_process');
                        // exec('start https://www.yahoo.com', (err, stdout, stderr) => {
                        //     if (err) {
                        //         console.error(`exec error: ${err}`);
                        //         return;
                        //     }
                        //     console.log(`stdout: ${stdout}`);
                        //     console.error(`stderr: ${stderr}`);
                        // });
                    } else {
                        console.error(`net use process exited with code ${code}`);
                        res.status(401).send('密碼錯誤');
                    }
                });
            } else {
                db.all('SELECT username FROM user WHERE username = ?', [username], (err, rows) => {
                    if (err) {
                        console.error(err.message);
                    }
                    // 處理查詢結果
                    console.log(rows);
                    if (rows.length > 0) {
                        db.get('SELECT accessLevel FROM user WHERE username = ?', [username], (err, row) => {
                            if (err) {
                                console.error(err);
                                // res.status(500).send('数据库查询错误');
                            }
                            if (!row) {
                                res.status(400).send('查無此人權限');
                            } else if (row.accessLevel !== 0) {
                                // sendResponse('login3.html', 401, response);
                                // res.sendFile(__dirname + '/login3.html');
                                // res.redirect('/login3.html');
                                // 用户名存在，但访问级别不匹配，向前端返回错误信息
                                res.status(403).send('權限不足');
                            } else {
                                // 用户名存在且accessLevel为0，进行其他操作或跳转页面
                            }
                        });
                    } else {
                        // 用户名不存在，向前端返回错误信息
                        res.status(400).send('查無此人權限');
                    }
                });
            }
        });
    } else {
        // const db = new sqlite3.Database('//cmit/Internal/Innovation/Thomas/msi_cps.db', sqlite3.OPEN_READWRITE, (error) => {
        const db = new sqlite3.Database('./AdminAccess.db', sqlite3.OPEN_READWRITE, (error) => {         /*在連接資料庫時，使用的是 sqlite3.Database 方法，其中第一個參數是資料庫的檔案路徑，第二個參數是開啟資料庫的模式，此處為 OPEN_READWRITE 表示讀寫模式。第三個參數是一個 callback 函式，在資料庫連接完成後會被呼叫。 */
            // let db = new sqlite3.Database(path.join(__dirname, '..', 'AdminAccess.db'), sqlite3.OPEN_READWRITE, (error) => {
            if (error) {
                console.error(error.message);
            } else {
                console.log('Connected to the database.');
            }
        });
        db.run("CREATE TABLE IF NOT EXISTS user (username TEXT,accessLevel TEXT)");
        db.all('SELECT * FROM user WHERE username = ?', [username], (err, rows) => {
            if (err) {
                console.error(err.message);
            }
            // 處理查詢結果
            console.log(rows);
            if (rows.length > 0) {
                // 輸入網域、使用者名稱和密碼
                const domain = '127.0.0.1';
                const domain1 = 'MSI';
                // 建立 net use 命令
                const netUse = spawn('net', ['use', `\\\\${domain}\\IPC$`, `/user:${domain1}\\${username}`, password]);
                // 監聽 stdout 和 stderr
                netUse.stdout.on('data', (data) => {
                    console.log(`stdout: ${data}`);
                });
                netUse.stderr.on('data', (data) => {
                    console.error(`stderr: ${data}`);
                });
                // 監聽執行結束事件
                netUse.on('close', (code) => {
                    if (code === 0) {
                        const queries = [
                            { accessLevel: 0, redirectPage: '/GPIOtool4.html' },
                            { accessLevel: 1, redirectPage: '/GPIOtool4.html' },
                            { accessLevel: 2, redirectPage: '/GPIOtool5.html' },
                            { accessLevel: 3, redirectPage: '/GPIOtool5.html' }
                        ];
                        queries.forEach(({ accessLevel, redirectPage }) => {
                            db.all('SELECT * FROM user WHERE username = ? AND accessLevel = ?', [username, accessLevel], (err, rows) => {
                                if (err) {
                                    console.error(err.message);
                                }

                                console.log(rows);
                                if (rows.length > 0) {
                                    res.redirect(redirectPage);
                                } else {
                                    // Handle other cases if needed
                                }
                            });
                        });
                    } else {
                        console.error(`net use process exited with code ${code}`);
                        res.status(401).send('密碼錯誤');
                    }
                });
            } else {
                // sendResponse('login3.html', 401, response);
                // res.sendFile(__dirname + '/login3.html');
                res.status(403).send('查無此人權限');
                // res.redirect('/login3.html');
            }
        });
    }
});
// 處理POST請求，驗證帳號密碼
app.post('/addData', function (req, res) {
    // 取得輸入的帳號密碼
    const newData = req.body; // 從前端傳送的新增資料
    // const username = req.body.username;
    // const password = req.body.password;
    // const value = req.body.Access;
    // const db = new sqlite3.Database('//cmit/Internal/Innovation/Thomas/msi_cps.db', sqlite3.OPEN_READWRITE, (error) => {
    // const db = new sqlite3.Database('./AdminAccess.db', sqlite3.OPEN_READWRITE, (error) => {         /*在連接資料庫時，使用的是 sqlite3.Database 方法，其中第一個參數是資料庫的檔案路徑，第二個參數是開啟資料庫的模式，此處為 OPEN_READWRITE 表示讀寫模式。第三個參數是一個 callback 函式，在資料庫連接完成後會被呼叫。 */
    //     if (error) {
    //         console.error(error.message);
    //         console.log('cannot Connected to the database.');

    //     } else {
    //         console.log('Connected to the database.');
    //     }
    // });
    // const db = new sqlite3.Database('//cmit/Internal/Innovation/Thomas/AdminAccess.db', sqlite3.OPEN_READWRITE, (error) => {
    const db = new sqlite3.Database('./AdminAccess.db', (err) => {
        // let db = new sqlite3.Database(path.join(__dirname, '..', 'AdminAccess.db'), sqlite3.OPEN_READWRITE, (err) => {
        if (err) {
            console.error(err.message);
            return;
        }
        console.log('Connected to the database');
    });
    db.run("CREATE TABLE IF NOT EXISTS user (username TEXT,accessLevel TEXT)");
    if (newData.name) {
        // 檢查 SQLite 資料庫中是否已存在相同的 name 值
        db.get('SELECT * FROM user WHERE username = ?', [newData.name], (err, row) => {
            if (err) {
                return res.status(500).json({ error: err.message });
            }
            if (row) {
                // 資料庫中已存在相同的 name 值
                return res.status(400).json({ error: 'Name already exists' });
            }
            // 資料庫中沒有相同的 name 值，將資料插入到資料庫
            db.run('INSERT INTO user(username, accessLevel) VALUES (?, ?)', [newData.name, newData.Access], (err) => {
                if (err) {
                    return res.status(500).json({ error: err.message });
                }
                res.json({ message: 'Data inserted' });
            });
        });
        db.close((error) => {               /*關閉資料庫連接 */
            if (error) {
                console.error(error.message);
            } else {
                console.log('Close the database connection.');
            }
        });
    }
});
// 处理删除请求
app.post('/delete', (req, res) => {
    const data = req.body; // 從請求主體中取得資料
    // 在這裡對資料進行處理
    console.log(data);
    const db = new sqlite3.Database('./AdminAccess.db', (err) => {
        // let db = new sqlite3.Database(path.join(__dirname, '..', 'AdminAccess.db'), sqlite3.OPEN_READWRITE, (err) => {
        if (err) {
            console.error(err.message);
        }
        console.log('Connected to the database.');
    });
    db.run("CREATE TABLE IF NOT EXISTS user (username TEXT,accessLevel TEXT)");
    // 查询数据库
    db.get('SELECT * FROM user WHERE username = ?', [data.name], (err, row) => {
        if (err) {
            return res.status(500).json({ error: err.message });
        }
        if (row) {
            // 資料庫中已存在相同的 name 值
            res.status(400).json({ error: 'Name already exists' });
            db.run(`DELETE FROM user WHERE username = ?`, [data.name], function (err) {
                if (err) {
                    console.error(err.message);
                    res.status(500).json({ message: 'Internal server error.' });
                    return;
                }
                // 返回处理结果
                // res.json({ message: `user ${data} has been deleted.` });
            });
        }
    });
    db.close();
});
// 处理修改请求
app.post('/revise', (req, res) => {
    const data = req.body; // 從請求主體中取得資料
    // 在這裡對資料進行處理
    console.log(data);
    const db = new sqlite3.Database('./AdminAccess.db', (err) => {
        // let db = new sqlite3.Database(path.join(__dirname, '..', 'AdminAccess.db'), sqlite3.OPEN_READWRITE, (err) => {
        if (err) {
            console.error(err.message);
        }
        console.log('Connected to the database.');
    });
    db.run("CREATE TABLE IF NOT EXISTS user (username TEXT,accessLevel TEXT)");
    // 查询数据库
    db.get('SELECT * FROM user WHERE username = ?', [data.name], (err, row) => {
        if (err) {
            return res.status(500).json({ error: err.message });
        }
        if (row) {
            // 資料庫中已存在相同的 name 值
            res.status(400).json({ error: 'Name already exists' });
            if (row.accessLevel !== data.Access) {
                // 更新访问级别
                const updateQuery = `UPDATE user SET accessLevel = ? WHERE username = ?`;
                db.run(updateQuery, [data.Access, data.name], (error) => {
                    if (error) {
                        console.error(error.message);
                        console.log('更新数据时出错。');
                    } else {
                        console.log('成功更新访问级别。');
                    }
                });
            }
        }
    });
    db.close();
});
app.post('/csvdata', (req, res) => {                            // POST 請求的路由處理函式
    const { csvContent, outputFile1, csvFileName } = req.body;  // 從請求主體解構出 csvContent 和 outputFile
    // const csvContent = req.body.csvContent;
    // const outputFile = req.body.outputFile;
    // console.log('CSV Content:', csvContent);                 // 印出 csvContent 的內容
    // const lines = csvContent.split('\n');                    // 將 csvContent 拆分成行陣列
    // const firstLine = lines[0];                              // 獲取第一行內容
    // const fields = firstLine.split(',');                     // 將第一行內容拆分成欄位陣列
    // const ninthString = fields[9].replace(/\r/g, '');        // 獲取第 9 個字串（索引為 8，因為索引從 0 開始）
    const filePath = `./GpioPinsFile/${csvFileName}.txt`;       // 選取的檔案路徑為
    // const filePath = `./GpioPinsFile/${ninthString}.txt`;    // 指定檔案路徑
    // const fileName = path.basename(filePath);                // 使用 path 模組中的 basename 方法獲取檔案的檔名
    // console.log(fileName);                                   // 輸出: 'file.txt'

    fs.readFile(filePath, 'utf8', (err, data) => {
        if (err) {
            console.error('讀取檔案時發生錯誤:', err);
            return;
        }
        var tableData = data;                                                   // console.log('檔案內容:', data);
        // var csvcontent2 = htogetcsvifo(hfileContent, tableData, finalString1);
        // console.log('tableData:', tableData);
        var filecontent = csvToCode1(csvContent, tableData);
        // const result = filecontent;
        const result = {
            filecontent: filecontent,
            csvContent: csvContent,
            tableData: tableData
        };
        res.send(result);                                                       // 假設要回傳處理結果，可以使用 res.send 回傳結果給前端
    });
});
app.post('/csvdata1', (req, res) => {                            // POST 請求的路由處理函式
    const { hfileContent, outputFile } = req.body;  // 從請求主體解構出 csvContent 和 outputFile
    // const csvContent = req.body.csvContent;
    // const outputFile = req.body.outputFile;
    // console.log('CSV Content:', csvContent);                 // 印出 csvContent 的內容
    // const lines = csvContent.split('\n');                    // 將 csvContent 拆分成行陣列
    // const firstLine = lines[0];                              // 獲取第一行內容
    // const fields = firstLine.split(',');                     // 將第一行內容拆分成欄位陣列
    // const ninthString = fields[9].replace(/\r/g, '');        // 獲取第 9 個字串（索引為 8，因為索引從 0 開始）
    // const filePath = `./GpioPinsFile/${csvFileName}.txt`;       // 選取的檔案路徑為
    // const filePath = `./GpioPinsFile/${ninthString}.txt`;    // 指定檔案路徑
    // const fileName = path.basename(filePath);                // 使用 path 模組中的 basename 方法獲取檔案的檔名
    // console.log(fileName);                                   // 輸出: 'file.txt'
    var finalString1 = hfileoutputname(hfileContent);
    const filePath = `./GpioPinsFile/${finalString1}.txt`;                          // 指定檔案路徑
    fs.readFile(filePath, 'utf8', (err, data) => {
        if (err) {
            console.error('讀取檔案時發生錯誤:', err);
            return;
        }
        var tableData = data;                                                   // console.log('檔案內容:', data);
        var csvcontent2 = htogetcsvifo(hfileContent, tableData, finalString1);
        // console.log('tableData:', tableData);
        var filecontent = csvToCode1(csvcontent2, tableData);
        // const result = filecontent;
        const result = {
            filecontent: filecontent,
            csvcontent2: csvcontent2,
            tableData: tableData
        };
        res.send(result);                                                       // 假設要回傳處理結果，可以使用 res.send 回傳結果給前端
    });
});
app.post('/csvdata2', (req, res) => {                            // POST 請求的路由處理函式
    const { csvContent, outputFile1, csvFileName } = req.body;  // 從請求主體解構出 csvContent 和 outputFile
    // const csvContent = req.body.csvContent;
    // const outputFile = req.body.outputFile;
    // console.log('CSV Content:', csvContent);                 // 印出 csvContent 的內容
    // const lines = csvContent.split('\n');                    // 將 csvContent 拆分成行陣列
    // const firstLine = lines[0];                              // 獲取第一行內容
    // const fields = firstLine.split(',');                     // 將第一行內容拆分成欄位陣列
    // const ninthString = fields[9].replace(/\r/g, '');        // 獲取第 9 個字串（索引為 8，因為索引從 0 開始）
    const filePath = `./GpioPinsFile/${csvFileName}.txt`;       // 選取的檔案路徑為
    // const filePath = `./GpioPinsFile/${ninthString}.txt`;    // 指定檔案路徑
    // const fileName = path.basename(filePath);                // 使用 path 模組中的 basename 方法獲取檔案的檔名
    // console.log(fileName);                                   // 輸出: 'file.txt'
    fs.readFile(filePath, 'utf8', (err, data) => {
        if (err) {
            console.error('讀取檔案時發生錯誤:', err);
            return;
        }
        var tableData = data;                                                   // console.log('檔案內容:', data);
        // var csvcontent2 = htogetcsvifo(hfileContent, tableData, finalString1);
        // console.log('tableData:', tableData);
        // var filecontent = csvToCode1(csvContent, tableData);
        // const result = filecontent;
        const result = {
            csvContent: csvContent,
            tableData: tableData
        };
        res.send(result);                                                       // 假設要回傳處理結果，可以使用 res.send 回傳結果給前端
    });
});
// 監聽伺服器端口
app.listen(3000, () => {
    console.log(`Server running at http://127.0.0.1:3000`);
    var c = require('child_process');
    c.exec('start http://127.0.0.1:3000');
});
function getcsvContentifo(csvContent, tableData) {
    const desiredKeys = [
        '[GPIO Pin]',
        '[Pad Mode]',
        '[Host Soft Owner]',
        '[Direction]',
        '[Output State]',
        '[Interrupt Configuration]',
        '[Reset Configuration]',
        '[Electrical Configuration]',
        '[Lock Status]',
        '[None]'
    ];
    const lines = csvContent.trim().split('\n');
    const array = [];
    const array1 = [];
    for (let i = 0; i < lines.length; i++) {
        // array.push(lines[i].trim().split(','));                               //將 lines[i] 字符串先使用 .trim() 方法去除前後空格，然後使用 .split(',') 方法將其按逗號進行分割，將分割後的結果作為一個新的元素添加到 array 陣列中。
        array.push(lines[i].split(',').map(item => item.trim()));                //是将一行字符串按逗号分割，并去除每个项的首尾空格，然后将结果作为一个数组加入到 array 中
        array1.push(lines[i].split(',').map(item => item.trim()));               //是将一行字符串按逗号分割，并去除每个项的首尾空格，然后将结果作为一个数组加入到 array1 中
    }
    var l = 1;
    var textContent = "";
    for (var j = 1; j < lines.length; j++) {
        var columnCount1 = 0;
        // console.log(lines[j].split(',').length);
        for (var k = 0; k < 10; k++) {
            if (array[j][k] && /[a-zA-Z].*[a-zA-Z]/.test(array[j][k])) {
                columnCount1 = columnCount1 + 1;
            }
        }
        for (var k = 0; k < columnCount1; k++) {
            var m = k;
            var resetConfigStart = tableData.indexOf(desiredKeys[m]);
            var resetConfigEnd = tableData.indexOf(desiredKeys[m + 1]);
            var resetConfigString = tableData.substring(resetConfigStart, resetConfigEnd).trim();
            // var resetConfigString = tableData.substring(resetConfigStart).trim();
            const keyValuePairs = [];
            // const keyValuePairs = {};                                 //建立一個以 key 為索引的物件
            const regex = /^\s*([^=\[\]]+)\s*=\s*([^=\[\]]+)\s*$/gm;     //^ 表示匹配行的开头。// \s* 匹配零个或多个空白字符。这个正则表达式可以用于匹配以空白字符开头的字符串，它会忽略开头的空白字符并匹配之后的内容。// ([^=\[\]]+) 是一个捕获组，用于匹配除了等号（=）、左方括号（[）、右方括号（]）之外的任意字符。[^=\[\]] 是一个字符类，表示不是等号、左方括号和右方括号的字符。// \s*=\s* 匹配等号两侧的零个或多个空白字符。// ([^=\[\]]+) 是另一个捕获组，用于匹配除了等号、左方括号、右方括号之外的任意字符。// \s* 匹配零个或多个空白字符。// $ 表示匹配行的结尾。// g 是全局匹配标志，表示匹配多个符合条件的字符串。// m 是多行匹配标志，表示匹配多行文本中的行开头和行结尾。
            let match;
            while ((match = regex.exec(resetConfigString))) {
                const key = match[1].trim();
                const value = match[2].trim();
                // keyValuePairs[key] = value;                           //建立一個以 key 為索引的物件
                keyValuePairs.push([key, value]);
            }
            // const entries = Object.entries(keyValuePairs);            // 提取每个键和对应的值
            // entries.forEach(([key, value]) => {                       // 打印每个键和对应的值
            //     console.log(`键: ${key}, 值: ${value}`);
            // });
            // const keys = entries.map(([key, value]) => key);          // 提取所有的键
            // const values = entries.map(([key, value]) => value);      // 提取所有的值
            // for (var i = 0; i <= keys.length; i++) {
            //     console.log('所有的键:', keys[i]);
            //     console.log('所有的值:', values[i]);
            // }
            // ////---------------------------------------
            // keyValuePairs.forEach(([key, value]) => {
            //     console.log(`键: ${key}, 值: ${value}`);
            // });        
            const keys = keyValuePairs.map(([key, value]) => key);
            const values = keyValuePairs.map(([key, value]) => value);
            for (var n = 0; n < keys.length; n++) {
                if (keys[n] == array[j][k]) {
                    array1[j][k] = values[n];
                    break;
                }
                if ((keys[n] !== array[j][k]) && (n == keys.length - 1)) {
                    array1[j][k] = "____error!____";
                }
            }
        }
    }
    return array1;
}
function csvToCode1(csvContent, tableData) {
    var array2 = getcsvContentifo(csvContent, tableData);
    return array2;
}
function htogetcsvifo(hfileContent, tableData, finalString1) {
    const desiredKeys1 = [
        '[GPIO Pin]',
        '[Pad Mode]',
        '[Host Soft Owner]',
        '[Direction]',
        '[Output State]',
        '[Interrupt Configuration]',
        '[Reset Configuration]',
        '[Electrical Configuration]',
        '[Lock Status]',
        '[None]'
    ];
    const lines = hfileContent.split('\n');                                             // 将字符串按行分割成数组
    const filteredLines = lines                                                         // 过滤掉以 '#' 或 '//' 开头的行，非 '{' 开头的行，并去除行首和行尾的空格
        // .filter((line) => !line.trim().startsWith('#') && !line.trim().startsWith('//') && line.trim().startsWith('{') && line.trim().length > 1 && !line.trim().startsWith('{0x0'))
        .filter((line) => line.trim().startsWith('{') && line.trim().length > 1 && !line.trim().startsWith('{0x0'))
        .map((line) => {
            const index = line.indexOf('}');                                            // 去除每行末尾的 '}' 及其后的任何字符
            return index === -1 ? line.trim() : line.slice(0, index).trim();            // 第一個出現 '}' 字符的索引位置，記為 index。如果該行中沒有 '}' 字符，則 index 的值為 -1。
        })
    // .filter((line) => !line.startsWith('/**') && !line.endsWith('**/'));
    const outputString = filteredLines.join('\n');                                      // 将过滤后的行重新组合成字符串
    const lines1 = outputString.split('\n');
    const resultArray = [];
    const resultArray1 = [];
    for (let i = 0; i < lines1.length; i++) {
        // const trimmedLine = lines1[i].replace(/[{\s}]/g, "");                        // [{\s}] 表示匹配 {、} 字符以及空白字符中的任何一個。/g 表示進行全局匹配，即匹配整個字串中所有符合條件的字符。
        const trimmedLine = lines1[i].replace(/[{\s]+/g, "");                           // [{\s] 表示匹配 { 字符或者空白字符的一個字符。+ 表示匹配前面的字符至少一次或多次。/g 表示進行全局匹配，即匹配整個字串中所有符合條件的字符。
        if (trimmedLine !== '') {
            const lineArray = trimmedLine.split(',');
            resultArray.push(lineArray);
            resultArray1.push(lineArray);
        }
    }
    resultArray1.push([]); // 添加一個空行
    // const regex = /[^{,\s\n]+/g;                        //使用正则表达式 /[^{,\s\n]+/g 匹配 outputString 中的非空白字符和非 {、,、\n 字符，并存储在 matches 数组中。
    // const matches = outputString.match(regex);
    // const outputArray = [];
    // for (let i = 0; i < matches.length; i += 8) {
    //     const line = matches.slice(i, i + 8);
    //     outputArray.push(line);
    // }
    // const formalCode1 = new Array(8);
    // for (let j = 0; j < (matches.length / 8) + 1; j++) {
    //     formalCode1[j] = new Array(8);
    // }
    for (var l = 0; l < lines1.length; l++) {
        const columnCount = resultArray[l].length; // 取得每一行的字串個數
        for (var k = 0; k < columnCount; k++) {
            var m = k;
            var resetConfigStart = tableData.indexOf(desiredKeys1[m]);
            var resetConfigEnd = tableData.indexOf(desiredKeys1[m + 1]);
            var resetConfigString = tableData.substring(resetConfigStart, resetConfigEnd).trim();
            // var resetConfigString = tableData.substring(resetConfigStart).trim();
            const keyValuePairs = [];
            // const keyValuePairs = {};
            const regex = /^\s*([^=\[\]]+)\s*=\s*([^=\[\]]+)\s*$/gm;                            // 使用正则表达式匹配并提取键值对
            let match;
            while ((match = regex.exec(resetConfigString))) {
                const key = match[1].trim();
                const value = match[2].trim();
                // keyValuePairs[key] = value;
                keyValuePairs.push([key, value]);
            }

            const keys = keyValuePairs.map(([key, value]) => key);
            const values = keyValuePairs.map(([key, value]) => value);
            for (var n = 0; n < keys.length; n++) {
                if (values[n].includes(resultArray[l][k])) {
                    resultArray1[l][k] = keys[n];
                    break;
                }
            }
        }
    }
    const desiredKeys2 = [
        'GPIO Pin',
        'Pad Mode',
        'Host Soft Owner',
        'Direction',
        'Output State',
        'Interrupt Configuration',
        'Reset Configuration',
        'Electrical Configuration',
        'Lock Status'
    ];
    resultArray1.unshift(desiredKeys2); // 插入 desiredKeys2 字串到開頭
    // // 将二维数组转换为 CSV 格式字符串
    const csvContent1 = resultArray1.map(row => row.join(',')).join('\n');       // 遍历 formalCode1 数组的每一行，将每行数组的元素使用逗号 , 连接起来，生成一行 CSV 数据。使用换行符 '\n' 将每行的 CSV 数据连接起来，形成最终的 CSV 字符串。
    const username = os.userInfo().username;
    console.log(`本機使用者名稱：${username}`);
    const filePath1 = `C:/Users/${username}/Downloads/${finalString1}.csv`;
    // fs.writeFile('./GpioPinsFile/GpioPins.csv', csvContent1, (err) => {          // 保存 CSV 内容到文件
    fs.writeFile(filePath1, csvContent1, (err) => {                             // 保存 CSV 内容到文件
        if (err) {
            console.error('Error writing CSV file:', err);
        } else {
            console.log('CSV file saved successfully.');
        }
    });
    return csvContent1;
}
function hfileoutputname(hfileContent) {
    const lines = hfileContent.split('\n');                                     // 将字符串按行分割成数组
    const filteredLines = lines                                                 // 过滤掉以 '#' 或 '//' 开头的行，非 '{' 开头的行，并去除行首和行尾的空格
        // .filter((line) => !line.trim().startsWith('#') && !line.trim().startsWith('//') && line.trim().startsWith('{') && line.trim().length > 1 && !line.trim().startsWith('{0x0'))
        .filter((line) => line.trim().startsWith('{') && line.trim().length > 1 && !line.trim().startsWith('{0x0'))
        .map((line) => {
            const index = line.indexOf('}');                                    // 去除每行末尾的 '}' 及其后的任何字符
            return index === -1 ? line.trim() : line.slice(0, index).trim();
        })
    // .filter((line) => !line.startsWith('/**') && !line.endsWith('**/'));
    const outputString = filteredLines.join('\n');                              // 将过滤后的行重新组合成字符串
    const lines1 = outputString.split('\n');
    const resultArray = [];
    const resultArray1 = [];
    for (let i = 0; i < lines1.length; i++) {
        // const trimmedLine = lines1[i].replace(/[{\s}]/g, "");
        const trimmedLine = lines1[i].replace(/[{\s]+/g, "");
        if (trimmedLine !== '') {
            const lineArray = trimmedLine.split(',');
            resultArray.push(lineArray);
            resultArray1.push(lineArray);
        }
    }
    for (let k = 0; k < lines1.length; k++) {
        const firstUnderscoreIndex = resultArray[k][0].indexOf('_');
        const secondUnderscoreIndex = resultArray[k][0].indexOf('_', firstUnderscoreIndex + 1);
        const thirdUnderscoreIndex = resultArray[k][0].indexOf('_', secondUnderscoreIndex + 1);
        if (thirdUnderscoreIndex !== -1) {
            resultArray1[k][0] = resultArray[k][0].slice(0, thirdUnderscoreIndex + 1);
        } else {
            console.log('未找到第二個底線');
        }
    }
    // const gpioPin = resultArray[0][0];
    const gpioPin = findMajorityValue(resultArray1, lines1);
    console.log(gpioPin);
    const prefix = "Gpio";
    const suffix = "PinsVer";
    const parts = gpioPin.split("_");
    const digit = parts[1].slice(3); // "4"
    const letter = parts[2]; // "S"
    // console.log(digit); // 輸出: 4
    // console.log(letter); // 輸出: S
    // 組合最終字串
    const finalString = prefix + suffix + digit + letter;
    console.log(finalString); // 輸出: GpioPinsVer4S
    return finalString;
}
function findMajorityValue(resultArray1, lines1) {
    const countMap = {}; // 用於記錄每個值的出現次數

    // 計算每個值的出現次數
    for (let j = 0; j < lines1.length; j++) {
        const value = resultArray1[j][0];
        countMap[value] = (countMap[value] || 0) + 1;
    }
    // 檢查是否有值的出現次數超過過半數
    const halfCount = Math.floor(lines1.length / 2);
    for (const value in countMap) {
        if (countMap[value] > halfCount) {
            return value; // 回傳出現次數超過過半數的值
        }
    }
    return null; // 若沒有出現次數超過過半數的值，則回傳 null
}