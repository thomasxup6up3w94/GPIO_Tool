const express = require('express');
const sqlite3 = require('sqlite3').verbose();
const app = express();
const bodyParser = require('body-parser');
// const { exec } = require('child_process');
const ejs = require('ejs');
const fs = require('fs');
const cheerio = require('cheerio');
// 使用 body-parser 中間件解析 JSON 格式的請求主體
/*urlencoded是一種將表單數據編碼為URL搜索參數的編碼方式。在Node.js中，body-parser中間件提供了urlencoded解析功能，可以將URL編碼的表單數據解析成JavaScript對象。通常，我們在處理來自表單提交的數據時會使用urlencoded解析。 */
// 解析POST請求的body
app.use(bodyParser.urlencoded({ extended: false }));                        /*這段程式碼是在使用Express框架中設定中介軟體(bodyParser)。bodyParser是一個解析HTTP請求主體的中介軟體，它支援解析urlencode、JSON和multipart等格式的請求主體。在這個例子中，使用urlencoded來解析請求主體。其中，extended設定為false表示解析的資料中不包含複雜的資料型態，例如陣列或物件。 */
app.use('/static', express.static('image'));
// var favicon = require('serve-favicon');                         /*serve-favicon 模組來設置網頁的 favicon 圖標。 */
// app.use(favicon(__dirname + '/image/msi_icon.ico'));
// const urlLib = require('url');
// var Path = urlLib.parse(req.url,true).pathname;

// 路由處理
app.use(bodyParser.json());
// 设置视图引擎为EJS
const path = require('path');
app.set('view engine', 'ejs');
// app.set('views', path.join(__dirname, '/'));
app.set('views', path.join(__dirname, 'html'));
// app.set('views', path.join(__dirname, '..', 'html'));
// 處理GET請求，回傳HTML登入頁面
app.get('/', function (req, res) {
    // const db = new sqlite3.Database('./AdminAccess.db', sqlite3.OPEN_READWRITE, (error) => {         /*在連接資料庫時，使用的是 sqlite3.Database 方法，其中第一個參數是資料庫的檔案路徑，第二個參數是開啟資料庫的模式，此處為 OPEN_READWRITE 表示讀寫模式。第三個參數是一個 callback 函式，在資料庫連接完成後會被呼叫。 */
    //     if (error) {
    //         console.error(error.message);
    //         console.log('cannot Connected to the database.');

    //     } else {
    //         console.log('Connected to the database.');
    //     }
    // });
    // res.sendFile(__dirname + '/AdminPage3.html');                                /*__dirname代表目前檔案所在的目錄路徑 */
    // res.redirect('/AdminPage3.html');
    const db = new sqlite3.Database('AdminAccess.db', (err) => {
        // const db = new sqlite3.Database(path.join(__dirname, '..', 'AdminAccess.db'), (err) => {
        if (err) {
            console.error(err.message);
            // console.log('cannot Connected to the database.');
            return;
        }
        console.log('Connected to the database');
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

    // 关闭数据库连接
    db.close();
});
app.get('/AdminPage3.ejs', function (req, res) {
    res.sendFile(__dirname + '/html/AdminPage3.ejs');
    // res.sendFile(path.join(__dirname, '..', 'AdminPage3.ejs'));
});

// 處理POST請求，驗證帳號密碼
app.post('/addData', function (req, res) {
    // 取得輸入的帳號密碼
    const newData = req.body; // 從前端傳送的新增資料
    // const db = new sqlite3.Database('//cmit/Internal/Innovation/Thomas/AdminAccess.db', sqlite3.OPEN_READWRITE, (error) => {
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
        // const db = new sqlite3.Database(path.join(__dirname, '..', 'AdminAccess.db'), (err) => {
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
        // const db = new sqlite3.Database(path.join(__dirname, '..', 'AdminAccess.db'), (err) => {
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
        // const db = new sqlite3.Database(path.join(__dirname, '..', 'AdminAccess.db'), (err) => {
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
// 啟動伺服器
app.listen(3000, function () {
    // console.log('Server started on port 3000...');
    console.log(`Server running at http://127.0.0.1:3000`);
    var c = require('child_process');
    c.exec('start http://127.0.0.1:3000');
});