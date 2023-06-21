package com.example.demo;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.servlet.ModelAndView;
import org.springframework.web.servlet.view.RedirectView;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.awt.Desktop;
import java.net.URI;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.regex.Pattern;
import java.util.regex.Matcher;

import java.io.FileWriter;
import java.util.HashMap;
import java.util.Map;

import java.sql.PreparedStatement;
import java.sql.SQLException;
import javax.servlet.http.HttpServlet;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;

@Controller
public class GPIOApplication extends HttpServlet {
    private static final String[] DESIRED_KEYS = {
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
    };

    public static List<List<String>> getCSVContentInfo(String csvContent, String tableData) {
        String[] lines = csvContent.trim().split("\n"); // 将 csvContent 按行拆分，并去除首尾的空白字符，存储到 lines 数组中
        List<List<String>> array = new ArrayList<>();
        List<List<String>> array1 = new ArrayList<>();
        for (String line : lines) { // 这是一个循环语句，它遍历了 lines 数组中的每一行，并将每一行的内容依次赋值给变量 line。
            List<String> lineItems = new ArrayList<>(); // 在每次循环迭代开始时，创建一个新的空列表 lineItems，用于存储当前行中的每个项。
            for (String item : line.split(",")) { // 将每行按逗号拆分，并去除每个项的首尾空白字符，存储到lineItems列表中。对于当前行line，使用逗号作为分隔符将其拆分成一个字符串数组。然后使用增强型for循环遍历该数组中的每个项，并将每个项的内容依次赋值给变量item。
                lineItems.add(item.trim()); // 对于每个项item，使用trim()方法去除其首尾的空白字符，并将处理后的项添加到lineItems列表中。
            }
            // 检查列数是否小于10
            if (lineItems.size() < 9) {
                int diff = 9 - lineItems.size();
                // 添加空字符串，使 lineItems 的大小为10
                for (int i = 0; i < diff; i++) {
                    lineItems.add("");
                }
            }

            // 填充第9列（索引为8）
            if (lineItems.get(8).isEmpty()) {
                lineItems.set(8, ""); // 使用 "" 填充空的第9列
            }
            // System.out.println(lineItems.size());
            array.add(lineItems); // 将每行的 lineItems 列表添加到 array 和 array1 中
            array1.add(lineItems);
        }
        // for (List<String> line : array) {
        // System.out.println(line);
        // }
        // System.out.println(lines.length);
        for (int j = 1; j < lines.length; j++) {
            int columnCount1 = 0;
            for (int k = 0; k < 9; k++) {
                if (array.get(j).get(k).matches(".*[a-zA-Z].*[a-zA-Z].*")) { // 第k个项，通过array.get(j).get(k)获取其内容，并使用正则表达式".*[a-zA-Z].*[a-zA-Z].*"进行匹配。
                    columnCount1++; // 如果匹配成功（即当前项中包含至少两个字母），则将 columnCount1 的值增加 1。
                }
            }
            // System.out.println(columnCount1);
            for (int k = 0; k < columnCount1; k++) {
                int m = k;
                int resetConfigStart = tableData.indexOf(DESIRED_KEYS[m]); // 在tableData中查找DESIRED_KEYS[m]和DESIRED_KEYS[m+1]之间的字符串
                int resetConfigEnd = tableData.indexOf(DESIRED_KEYS[m + 1]);
                String resetConfigString = tableData.substring(resetConfigStart,
                        resetConfigEnd).trim();
                List<List<String>> keyValuePairs = new ArrayList<>(); // 创建一个空的二维列表 keyValuePairs，用于存储键值对。
                Pattern pattern = Pattern.compile("^\\s*([^=\\[\\]]+)\\s*=\\s*([^=\\[\\]]+)\\s*$",
                        Pattern.MULTILINE); // 创建一个正则表达式模式 pattern，用于匹配 resetConfigString 字符串中的键值对。
                Matcher matcher = pattern.matcher(resetConfigString); // 创建一个匹配器 matcher，并将其应用于 resetConfigString。
                while (matcher.find()) { // 通过循环遍历匹配器 matcher 找到的所有匹配项，提取键和值，并将它们添加到列表 keyValuePairs 中。
                    String key = matcher.group(1).trim();
                    String value = matcher.group(2).trim();
                    List<String> pair = new ArrayList<>();
                    pair.add(key);
                    pair.add(value);
                    keyValuePairs.add(pair);
                }

                List<String> keys = new ArrayList<>();
                List<String> values = new ArrayList<>();
                for (List<String> pair : keyValuePairs) { // 将键值对列表keyValuePairs拆分为两个单独的列表，分别存储键到keys列表和值到values列表。
                    keys.add(pair.get(0));
                    values.add(pair.get(1));
                }

                for (int n = 0; n < keys.size(); n++) { // 在keys列表中遍历每个键，与当前行的第k个项进行比较。如果匹配成功，则将对应的值values.get(n)存储到array1列表的相应位置上。
                    if (keys.get(n).equals(array.get(j).get(k))) {
                        array1.get(j).set(k, values.get(n));
                        break;
                    }
                    // if (!keys.get(n).equals(array.get(j).get(k)) && n == keys.size() - 1) {
                    // array1.get(j).set(k, "error!");
                    // }
                }
            }
        }
        return array1;
    }

    public static List<List<String>> csvToCode1(String csvContent, String tableData) {
        return getCSVContentInfo(csvContent, tableData);
    }

    public static String htogetcsvifo(String hfileContent, String tableData,
            String finalString1) {
        String[] desiredKeys1 = {
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
        };

        String[] lines = hfileContent.split("\n"); // 將 hfileContent 字符串根據換行符（\n）分割，並將結果存儲在 lines 字符串數組中。
        String[] filteredLines = new String[lines.length]; // 創建了一個與 lines 數組相同長度的字符串數組 filteredLines，用於存儲過濾後的行。
        int filteredLinesCount = 0;
        // System.out.println(lines.length);
        for (String line : lines) { // for 循環，用於遍歷 lines 數組中的每一行。
            line = line.trim(); // 對行進行修剪（去除首尾空格）
            if (line.startsWith("{") && line.length() > 1 && !line.startsWith("{0x0")) { // 檢查行是否以{開頭，長度大於1，並且不以{0x0開頭。
                int index = line.indexOf("}"); // 尋找 } 的索引位置
                line = (index == -1) ? line.trim() : line.substring(0, index).trim(); // 根據索引位置將行進行截取，去除 } 及其後面的部分。
                filteredLines[filteredLinesCount] = line; // 濾後的行存儲在 filteredLines 數組中的對應位置
                filteredLinesCount++; // 將 filteredLinesCount 增加1。
            }
        }
        // for (int i = 0; i < filteredLinesCount; i++) {
        // System.out.println(filteredLines[i]);
        // }
        String[] linesToJoin = Arrays.copyOfRange(filteredLines, 0, filteredLinesCount);
        String outputString = String.join("\n", linesToJoin); // 使用String.join方法將filteredLines集合中的字串以換行符號\n連接起來，形成一個包含所有字串的outputString字串。
        // System.out.println(outputString);
        String[] lines1 = outputString.split("\n"); // 程式碼使用split方法將outputString字串根據換行符號\n分割成字串陣列lines1。
        String[][] resultArray1 = new String[lines1.length][]; // 程式碼宣告了兩個二維字串陣列resultArray和resultArray1，其行數與lines1的長度相同。
        String[][] resultArray = new String[lines1.length][];

        for (int i = 0; i < lines1.length; i++) { // 迴圈逐行處理lines1中的每一行字串：
            String trimmedLine = lines1[i].replaceAll("[{\\s]+", ""); // 使用replaceAll方法將字串中的{和空白字元替換為空字串，即將{和空白字元移除
            if (!trimmedLine.isEmpty()) { // 檢查trimmedLine字串是否為空字串
                resultArray[i] = trimmedLine.split(","); // 使用split方法將trimmedLine字串根據逗號,分割成字串陣列，並將結果存入resultArray[i]和resultArray1[i]中。
                resultArray1[i] = trimmedLine.split(",");
            }
        }

        // resultArray1[lines1.length - 1] = new String[0];
        // 宣告了一個空的字串陣列resultArray1，該陣列的長度為lines1.length + 1。
        // System.out.println(lines1.length);

        for (int l = 0; l < lines1.length; l++) {
            int columnCount = resultArray[l].length;
            for (int k = 0; k < columnCount; k++) {
                // System.out.println(resultArray1[l][k]);
                int m = k;
                int resetConfigStart = tableData.indexOf(desiredKeys1[m]);
                int resetConfigEnd = tableData.indexOf(desiredKeys1[m + 1]);
                String resetConfigString = tableData.substring(resetConfigStart,
                        resetConfigEnd).trim();

                Map<String, String> keyValuePairs = new HashMap<>(); // 創建一個空的 HashMap 物件 keyValuePairs 用於存儲鍵值對。
                String regex = "\\s*([^=\\[\\]]+)\\s*=\\s*([^=\\[\\]]+)\\s*"; // 定義正則表達式regex，用於匹配resetConfigString中的鍵值對。
                String[] linesMatch = resetConfigString.split("\n"); // 使用resetConfigString.split("\n")將resetConfigString根據換行符號\n分割成字串陣列linesMatch。

                for (String line : linesMatch) {
                    line = line.trim(); // 去除首尾空格。
                    if (line.matches(regex)) { // 檢查line是否與正則表達式regex匹配。
                        String[] match = line.split("="); // 使用 line.split("=") 將 line 根據等號 = 分割成鍵值對，並去除首尾空格。
                        String key = match[0].trim();
                        String value = match[1].trim();
                        keyValuePairs.put(key, value); // 將分割後的鍵值對存入 keyValuePairs 中。
                    }
                }

                String[] keys = keyValuePairs.keySet().toArray(new String[0]); // 獲取所有的鍵，並轉換為字串陣列 keys。
                String[] values = keyValuePairs.values().toArray(new String[0]); // 獲取所有的值，並轉換為字串陣列 values。

                for (int n = 0; n < keys.length; n++) {
                    if (values[n].contains(resultArray[l][k])) { // 如果values[n]包含resultArray[l][k]，則將keys[n]存入resultArray1[l][k]。
                        resultArray1[l][k] = keys[n];
                        break;
                    }
                }
            }
            // System.out.println(); // 換行
        }

        String[] desiredKeys2 = {
                "GPIO Pin",
                "Pad Mode",
                "Host Soft Owner",
                "Direction",
                "Output State",
                "Interrupt Configuration",
                "Reset Configuration",
                "Electrical Configuration",
                "Lock Status"
        };

        String[][] finalArray = new String[resultArray1.length + 1][]; // 二維字串陣列finalArray，其行數比resultArray1的行數多 1
        finalArray[0] = desiredKeys2; // 並將desiredKeys2存入finalArray的第一行。
        System.arraycopy(resultArray1, 0, finalArray, 1, resultArray1.length); // 使用System.arraycopy方法將resultArray1的內容複製到finalArray中，從索引0開始，從finalArray的索引1開始複製，複製的長度為resultArray1的長度。

        StringBuilder csvContent = new StringBuilder(); // 程式碼創建了一個 StringBuilder 物件 csvContent 用於構建 CSV 內容。
        for (String[] row : finalArray) {
            csvContent.append(String.join(",", row)).append("\n"); // 程式碼使用迴圈遍歷finalArray中的每一行row，將每一行使用逗號,連接起來，並添加換行符號\n，然後附加到csvContent中。
        }
        String username = System.getProperty("user.name"); // 式碼獲取用戶名稱 username，並根據用戶名稱和其他變數生成 CSV 檔案的路徑 filePath1。
        String filePath1 = "C:/Users/" + username + "/Downloads/" + finalString1 +
                ".csv";
        try { // 在try塊中，程式碼創建一個FileWriter物件writer，並將csvContent轉換為字串後寫入到filePath1指定的檔案中。
            FileWriter writer = new FileWriter(filePath1);
            writer.write(csvContent.toString());
            writer.close(); // 關閉writer並顯示成功訊息。
            System.out.println("CSV file saved successfully.");
        } catch (IOException e) { // 程式碼將在catch塊中處理並顯示錯誤訊息。
            System.err.println("Error writing CSV file: " + e.getMessage());
        }

        return csvContent.toString(); // 程式碼返回 csvContent 的字串表示，即處理後的 CSV 內容。
    }

    public static String hfileoutputname(String hfileContent) {
        String[] lines = hfileContent.split("\n"); // 將輸入的字串以換行符號分割成陣列
        String[] filteredLines = new String[lines.length]; // 建立一個與 lines 陣列長度相同的新陣列
        int filteredLinesCount = 0; // 記錄符合條件的行數

        for (String line : lines) { // 迴圈遍歷 lines 陣列中的每一行
            line = line.trim(); // 移除行首尾的空白字符
            if (line.startsWith("{") && line.length() > 1 && !line.startsWith("{0x0")) { // 如果行以"{"開頭，且長度大於1，且不以"{0x0"開頭
                int index = line.indexOf("}"); // 找到"}"的索引位置
                line = (index == -1) ? line.trim() : line.substring(0, index).trim(); // 如果找到"}"，截取從行首到"}"之前的子字串，並移除其首尾的空白字符，如果沒有找到"}"，則移除行首尾的空白字符
                filteredLines[filteredLinesCount] = line; // 將符合條件的行存入filteredLines陣列中
                filteredLinesCount++; // 更新符合條件的行數
            }
        }

        String outputString = String.join("\n", filteredLines); // 將filteredLines陣列中的內容以換行符號連接為一個字串
        String[] lines1 = outputString.split("\n"); // 將outputString字串以換行符號分割成新的陣列lines1
        String[][] resultArray1 = new String[lines1.length][]; // 建立一個二維陣列resultArray1，大小與lines1陣列相同
        String[][] resultArray = new String[lines1.length][]; // 建立一個二維陣列 resultArray，大小與 lines1 陣列相同

        for (int i = 0; i < lines1.length; i++) { // 迴圈遍歷 lines1 陣列中的每一行
            String trimmedLine = lines1[i].replaceAll("[{\\s]+", ""); // 移除行首的 "{" 和空白字符
            if (!trimmedLine.isEmpty()) { // 如果修剪後的行不為空
                resultArray[i] = trimmedLine.split(","); // 將修剪後的行以逗號為分隔符號拆分成子字串陣列
                resultArray1[i] = trimmedLine.split(",");
            }
        }

        for (int k = 0; k < lines1.length; k++) { // 迴圈遍歷 lines1 陣列中的每一行
            int firstUnderscoreIndex = resultArray[k][0].indexOf("_"); // 找到第一個底線的索引位置
            int secondUnderscoreIndex = resultArray[k][0].indexOf("_",
                    firstUnderscoreIndex + 1); // 找到第二個底線的索引位置
            int thirdUnderscoreIndex = resultArray[k][0].indexOf("_",
                    secondUnderscoreIndex + 1); // 找到第三個底線的索引位置
            if (thirdUnderscoreIndex != -1) { // 如果找到第三個底線
                resultArray1[k][0] = resultArray[k][0].substring(0, thirdUnderscoreIndex +
                        1); // 截取 resultArray[k][0] 中從行首到第三個底線之前的子字串
            } else { // 如果沒有找到第三個底線，輸出提示訊息
                // System.out.println("未找到第二個底線");
            }
        }

        String gpioPin = findMajorityValue(resultArray1, lines1); // 呼叫findMajorityValue方法，傳入resultArray1和lines1陣列，取得結果字串gpioPin
        System.out.println(gpioPin); // 輸出gpioPin

        String prefix = "Gpio"; // 定義前綴字串"Gpio"和後綴字串"PinsVer"
        String suffix = "PinsVer";
        String[] parts = gpioPin.split("_"); // 將gpioPin字串以底線為分隔符號拆分成子字串陣列parts
        String digit = parts[1].substring(3); // 從parts[1]子字串中取得第三個字元之後的字串，賦值給字串變數digit
        String letter = parts[2]; // 取得 parts[2] 子字串，賦值給字串變數 letter

        String finalString = prefix + suffix + digit + letter; // 將前綴字串、後綴字串、digit 和 letter 組合成最終的字串 finalString
        System.out.println(finalString); // 輸出 finalString
        return finalString; // 返回 finalString
    }

    public static String findMajorityValue(String[][] resultArray1, String[] lines1) {
        HashMap<String, Integer> countMap = new HashMap<>(); // 建立一個 HashMap，用於計數

        for (int j = 0; j < lines1.length; j++) { // 迴圈遍歷 lines1 陣列中的每一行
            String value = resultArray1[j][0]; // 取得 resultArray1[j][0] 的值
            countMap.put(value, countMap.getOrDefault(value, 0) + 1); // 將該值作為鍵，在countMap中尋找相應的計數，如果找不到則預設為0，然後進行計數加一的操作
        }

        int halfCount = lines1.length / 2; // 計算陣列的一半數量
        for (String value : countMap.keySet()) { // 迴圈遍歷 countMap 中的每一個鍵值對
            if (countMap.get(value) > halfCount) { // 如果某個值的計數超過一半數量，則返回該值
                return value;
            }
        }

        return null;
    }

    // ------------------------------------------------------------------------------------------------------------------------------------------------------
    @PostMapping("/csvdata") // 使用 @PostMapping 注解的方法，用于处理 POST 请求，并指定了路径为 "/csvdata"。方法的参数
    public ResponseEntity<Map<String, Object>> processCsvData(@RequestBody Map<String, Object> requestData) { // 表示将请求体的JSON数据映射为一个Map对象，并命名为requestData。
        String csvContent = (String) requestData.get("csvContent"); // 从requestData中获取请求体中的"csvContent"、"outputFile1"和"csvFileName"字段的值，并分别存储在相应的变量中。
        // String outputFile1 = (String) requestData.get("outputFile1");
        String csvFileName = (String) requestData.get("csvFileName");

        String filePath = "./GpioPinsFile/" + csvFileName + ".txt"; // 构建文件路径，将文件名拼接到指定的文件夹路径后面。

        try {
            String fileContent = new String(Files.readAllBytes(Paths.get(filePath))); // 使用Java的文件操作类读取指定路径下的文件内容，并将文件内容存储在fileContent变量中。

            // Process the file content and csvContent
            List<List<String>> processedContent = csvToCode1(csvContent, fileContent); // 调用csvToCode1方法，将csvContent和fileContent作为参数传递给该方法，并将返回的处理结果存储在processedContent变量中。

            Map<String, Object> response = new HashMap<>(); // 创建一个HashMap对象response，用于构建响应数据。将处理后的文件内容processedContent、原始的CSV内容csvContent和表格数据fileContent存储在response中。
            response.put("filecontent", processedContent);
            response.put("csvContent", csvContent);
            response.put("tableData", fileContent);

            return ResponseEntity.ok(response); // 构建并返回一个 HTTP 响应，状态码为 200（OK），响应体为 response 对象。
        } catch (IOException e) {
            e.printStackTrace(); // 捕获可能发生的IOException异常，打印异常堆栈轨迹，并返回一个HTTP响应，状态码为500（Internal_Server_Error表示服务器内部错误。
            return ResponseEntity.status(HttpStatus.INTERNAL_SERVER_ERROR).build();
        }
    }

    @PostMapping("/csvdata1")
    public ResponseEntity<Map<String, Object>> processCsvData1(@RequestBody Map<String, Object> requestData) {
        String hfileContent = (String) requestData.get("hfileContent");
        // String outputFile = (String) requestData.get("outputFile");

        String finalString1 = hfileoutputname(hfileContent);
        String filePath = "./GpioPinsFile/" + finalString1 + ".txt";

        try {
            String tableData = new String(Files.readAllBytes(Paths.get(filePath)));

            String csvcontent2 = htogetcsvifo(hfileContent, tableData, finalString1);
            List<List<String>> filecontent = csvToCode1(csvcontent2, tableData);

            Map<String, Object> result = new HashMap<>();
            result.put("filecontent", filecontent);
            result.put("csvcontent2", csvcontent2);
            result.put("tableData", tableData);

            return ResponseEntity.ok(result); // 构建并返回一个 HTTP 响应，状态码为 200（OK），响应体为 response 对象。

        } catch (IOException e) {
            e.printStackTrace();
            return ResponseEntity.status(HttpStatus.INTERNAL_SERVER_ERROR).build();
        }
    }

    @PostMapping("/csvdata2")
    public ResponseEntity<Map<String, Object>> processCsvData2(@RequestBody Map<String, Object> requestData) {
        String csvContent = (String) requestData.get("csvContent");
        // String outputFile1 = (String) requestData.get("outputFile1");
        String csvFileName = (String) requestData.get("csvFileName");

        String filePath = "./GpioPinsFile/" + csvFileName + ".txt";

        try {
            String tableData = new String(Files.readAllBytes(Paths.get(filePath)));

            Map<String, Object> result = new HashMap<>();
            result.put("csvContent", csvContent);
            result.put("tableData", tableData);

            return ResponseEntity.ok(result); // 构建并返回一个 HTTP 响应，状态码为 200（OK），响应体为 response 对象。

        } catch (IOException e) {
            e.printStackTrace();
            return ResponseEntity.status(HttpStatus.INTERNAL_SERVER_ERROR).build();
        }
    }

    public static class NewData { // 定义了一个公共的静态内部类 NewData。
        private String name; // 声明了一个私有的字符串类型变量 name，用于存储名称。
        private int Access; // 声明了一个私有的整数类型变量 Access，用于存储访问级别。

        // 添加默认构造函数和getter/setter方法

        public String getName() { // 定义了一个公共的方法 getName()，用于获取名称属性的值。
            return name; // 返回名称属性的值。
        }

        public void setName(String name) { // 定义了一个公共的方法 setName(String name)，用于设置名称属性的值。
            this.name = name; // 将传入的参数值赋给名称属性。
        }

        public int getAccess() { // 定义了一个公共的方法 getAccess()，用于获取访问级别属性的值。
            return Access;
        }

        public void setAccess(int Access) { //
            this.Access = Access;
        }
    }

    @PostMapping("/addData") // 使用@PostMapping注解的方法，它处理/addData端点的POST请求。
    public String handleFormSubmission(@RequestParam String name, @RequestParam int Access) {
        // public String handleAddData(@RequestBody NewData newData) { //
        // @RequestBody注解表示将请求的主体内容映射到NewData对象上。方法的返回类型是String。
        // String name = newData.getName(); //
        // 从newData对象中获取name和access的值，并分别存储在name和access变量中。
        // int access = newData.getAccess();
        try { // 这是一个异常处理块，尝试加载SQLite JDBC驱动程序。如果找不到驱动程序，则捕获ClassNotFoundException异常并打印错误信息。
            Class.forName("org.sqlite.JDBC");
        } catch (ClassNotFoundException e) {
            System.err.println("SQLite JDBC driver not found");
            e.printStackTrace();
        }
        // 取得輸入的帳號密碼
        // Object newData = req.body(); // 從前端傳送的新增資料
        System.out.println(name); // 打印name和access的值。
        System.out.println(Access);
        try {
            String projectPath = System.getProperty("user.dir");
            String dbPath = projectPath + "/AdminAccess.db";
            Connection conn = DriverManager.getConnection("jdbc:sqlite:" + dbPath); // 获取当前项目的路径，并根据路径拼接数据库文件的路径。然后，使用DriverManager建立与SQLite数据库的连接，并将连接对象存储在conn变量中。
            // 連接到資料庫
            // Connection conn =
            // DriverManager.getConnection("jdbc:sqlite:D:/GPIOJava601/AdminAccess.db");
            System.out.println("Connected to the database");
            Statement statement = conn.createStatement(); // 创建一个Statement对象，用于执行SQL语句。这里执行的语句是创建名为user的表，如果表不存在的话。
            statement.execute("CREATE TABLE IF NOT EXISTS user (username TEXT, accessLevel INTEGER)");

            // if (newData instanceof Map) {
            // Map<String, Object> newDataMap = (Map<String, Object>) newData;
            // String name = (String) newDataMap.get("name");
            // String access = (String) newDataMap.get("Access");

            if (name != null) {
                // 檢查 SQLite 資料庫中是否已存在相同的 name 值
                String query = "SELECT * FROM user WHERE username = ?";
                PreparedStatement pstmt = conn.prepareStatement(query); // 创建一个带有参数的查询语句，使用PreparedStatement对象，查询是否存在具有相同name值的记录。
                pstmt.setString(1, name); // 将name值绑定到查询语句中的参数。
                ResultSet rs = pstmt.executeQuery(); // 执行查询并将结果存储在ResultSet对象中。

                if (rs.next()) { // 如果查询结果存在下一行（即数据库中已存在相同的name值），则不执行任何操作。
                    // 資料庫中已存在相同的 name 值
                } else {
                    // 資料庫中沒有相同的 name 值，將資料插入到資料庫
                    String insertQuery = "INSERT INTO user (username, accessLevel) VALUES (?, ?)"; // 否则，创建一个带有参数的插入语句，将name和access的值绑定到插入语句中的参数，然后执行插入操作。
                    PreparedStatement insertStmt = conn.prepareStatement(insertQuery);
                    insertStmt.setString(1, name);
                    // insertStmt.setString(2, access);
                    insertStmt.setInt(2, Access);
                    insertStmt.executeUpdate();
                }
            }
            // }
            conn.close(); // 关闭与数据库的连接。
            System.out.println("Close the database connection.");
        } catch (SQLException e) {
            System.err.println(e.getMessage());
        }
        return "redirect:/AdminPage3"; // 或者根据需要返回其他页面的名称
        // return "AdminPage3";
    }

    @PostMapping("/delete") // 使用@PostMapping注解的方法，它处理/delete端点的POST请求。
    public ResponseEntity<String> handleDeleteRequest(@RequestBody NewData dataRequest) { // @RequestBody注解表示将请求的主体内容映射到NewData对象上。方法的返回类型是ResponseEntity<String>。
        String name = dataRequest.getName(); // 从dataRequest对象中获取name的值，并存储在name变量中。
        try { // 获取当前项目的路径，并根据路径拼接数据库文件的路径。然后，使用DriverManager建立与SQLite数据库的连接，并将连接对象存储在conn变量中。
            String projectPath = System.getProperty("user.dir");
            String dbPath = projectPath + "/AdminAccess.db";
            Connection conn = DriverManager.getConnection("jdbc:sqlite:" + dbPath);
            System.out.println("Connected to the database");

            Statement statement = conn.createStatement(); // 创建一个Statement对象，用于执行SQL语句。这里执行的语句是创建名为user的表，如果表不存在的话。
            statement.execute("CREATE TABLE IF NOT EXISTS user (username TEXT, accessLevel INTEGER)");

            String selectQuery = "SELECT * FROM user WHERE username = ?"; // 创建一个带有参数的查询语句，使用PreparedStatement对象，查询是否存在具有相同name值的记录。将name值绑定到查询语句中的参数，并执行查询操作。查询结果存储在resultSet对象中。
            PreparedStatement selectStmt = conn.prepareStatement(selectQuery);
            selectStmt.setString(1, name);
            ResultSet resultSet = selectStmt.executeQuery();
            if (resultSet.next()) { // 如果查询结果存在下一行（即数据库中已存在相同的name值），则执行以下操作：
                System.out.println("Name already exists in the database"); // 打印一条消息表示该名称已经存在于数据库中。
                String deleteQuery = "DELETE FROM user WHERE username = ?";
                PreparedStatement deleteStmt = conn.prepareStatement(deleteQuery); // 创建一个带有参数的删除语句，使用PreparedStatement对象，将name值绑定到删除语句中的参数，并执行删除操作。
                deleteStmt.setString(1, name);
                deleteStmt.executeUpdate();
                System.out.println("User " + name + " has been deleted"); // 打印一条消息表示已删除用户name。
            } else {
                return ResponseEntity.status(HttpStatus.BAD_REQUEST).body("Name does not exist"); // 如果查询结果不存在下一行（即数据库中不存在相同的name值），则返回一个BAD_REQUEST状态码和相应的错误消息。
            }
            conn.close(); // 关闭与数据库的连接。
            System.out.println("Close the database connection.");
            return ResponseEntity.ok("User deleted successfully"); // 返回一个OK状态码和成功删除用户的消息。
        } catch (SQLException e) { // 捕获可能抛出的SQLException异常。在捕获到异常时，打印错误信息，并返回一个INTERNAL_SERVER_ERROR状态码和相应的错误消息。
            System.err.println(e.getMessage());
            return ResponseEntity.status(HttpStatus.INTERNAL_SERVER_ERROR).body("Internal server error.");
        }
    }

    @PostMapping("/revise")
    public ResponseEntity<String> handleReviseRequest(@RequestParam String name, @RequestParam int Access) {
        // public ResponseEntity<String> handleReviseRequest(@RequestBody NewData
        // dataRequest) {
        // String name = dataRequest.getName();
        // int accessLevel = dataRequest.getAccess();
        try {
            String projectPath = System.getProperty("user.dir");
            String dbPath = projectPath + "/AdminAccess.db";
            Connection conn = DriverManager.getConnection("jdbc:sqlite:" + dbPath);
            System.out.println("Connected to the database");

            Statement statement = conn.createStatement();
            statement.execute("CREATE TABLE IF NOT EXISTS user (username TEXT, accessLevel INTEGER)");

            String selectQuery = "SELECT * FROM user WHERE username = ?";
            PreparedStatement selectStmt = conn.prepareStatement(selectQuery);
            selectStmt.setString(1, name);
            ResultSet resultSet = selectStmt.executeQuery();

            if (resultSet.next()) {
                System.out.println("Name already exists in the database");
                String updateQuery = "UPDATE user SET accessLevel = ? WHERE username = ?";
                PreparedStatement updateStmt = conn.prepareStatement(updateQuery);
                updateStmt.setInt(1, Access);
                updateStmt.setString(2, name);
                int rowsAffected = updateStmt.executeUpdate();
                if (rowsAffected > 0) {
                    System.out.println("Access level updated successfully");
                } else {
                    System.out.println("Failed to update access level");
                }
            } else {
                return ResponseEntity.status(HttpStatus.BAD_REQUEST).body("Name does not exist");
            }

            conn.close();
            System.out.println("Close the database connection.");
            return ResponseEntity.ok("Access level updated successfully");
        } catch (SQLException e) {
            System.err.println(e.getMessage());
            return ResponseEntity.status(HttpStatus.INTERNAL_SERVER_ERROR).body("Internal server error.");
        }
    }

    @GetMapping("/")
    public String index() {
        String webpageUrl = "http://localhost:8080"; // 替换为您的网页 URL
        try {
            Desktop.getDesktop().browse(new URI(webpageUrl));
        } catch (Exception e) {
            e.printStackTrace();
        }
        return "login3";
    }

    // @GetMapping("/")
    // public String index() {
    // return "login3";
    // }

    // @GetMapping("/loginForm")
    // public String loginForm() {
    // return "login3";
    // }

    @GetMapping("/login3.html")
    public String login3() {
        return "login3";
    }

    @GetMapping("/GPIOtool4.html")
    public String GPIOtool4() {
        return "GPIOtool4";
    }

    @GetMapping("/GPIOtool5.html")
    public String GPIOtool5() {
        return "GPIOtool5";
    }

    @GetMapping("/AdminPage3.html") // 使用@GetMapping注解的方法，它处理/AdminPage3.html端点的GET请求。方法的返回类型是String，表示返回一个页面的名称。它接受一个Model对象作为参数。
    public String adminPage(Model model) throws ClassNotFoundException {
        Class.forName("org.sqlite.JDBC"); // 加载SQLite JDBC驱动程序。
        // 打开 SQLite 数据库连接
        String projectPath = System.getProperty("user.dir"); // 获取当前项目的路径，并根据路径拼接数据库文件的路径。
        // String dbPath = projectPath + File.separator + "AdminAccess.db";
        String dbPath = projectPath + "/AdminAccess.db";
        // Connection conn = DriverManager.getConnection("jdbc:sqlite:" + dbPath);
        try (Connection connection = DriverManager.getConnection("jdbc:sqlite:" + dbPath)) { // 使用DriverManager建立与SQLite数据库的连接，并使用try-with-resources语句来自动关闭连接。
            // try (Connection connection =
            // DriverManager.getConnection("jdbc:sqlite:D:/GPIOJava601/AdminAccess.db")) {
            System.out.println("Connected to the AdminAccess database."); // 打印一条连接成功的消息。
            // 创建表（如果不存在）
            try (Statement statement = connection.createStatement()) { // 创建一个Statement对象，用于执行SQL语句。这里执行的语句是创建名为user的表，如果表不存在的话。
                statement.executeUpdate("CREATE TABLE IF NOT EXISTS user (username TEXT, accessLevel INTEGER)");
            }
            // 查询数据
            try (Statement queryStatement = connection.createStatement(); // 创建一个Statement对象，并执行查询语句从user表中检索username和accessLevel字段的数据。
                    ResultSet resultSet = queryStatement.executeQuery("SELECT username, accessLevel FROM user")) {
                List<UserData> userList = new ArrayList<>();
                while (resultSet.next()) { // 将结果存储在ResultSet对象中。然后，遍历结果集，创建UserData对象并添加到userList列表中。
                    String username = resultSet.getString("username");
                    int accessLevel = resultSet.getInt("accessLevel");
                    UserData userData = new UserData(username, accessLevel);
                    userList.add(userData);
                }
                for (UserData userData : userList) {
                    System.out.println("Username: " + userData.getUsername());
                    System.out.println("Access Level: " + userData.getAccessLevel());
                    System.out.println("------------");
                }
                model.addAttribute("userList", userList);
            }
        } catch (Exception e) { // 捕获可能抛出的异常，并打印错误信息。
            System.err.println("Error: " + e.getMessage());
            // 处理错误
        }
        return "AdminPage3"; // 返回一个页面的名称，即AdminPage3，作为响应。
    }

    public class UserData { // UserData是一个简单的POJO类，表示用户的数据。它包含name和access两个私有属性，以及对应的getter方法。
        private String name;
        private int access;

        public UserData(String name, int access) {
            this.name = name;
            this.access = access;
        }

        public String getUsername() {
            return name;
        }

        public int getAccessLevel() {
            return access;
        }
    }

    // @RequestMapping("/redirect")
    // public RedirectView redirect() {
    // // 进行页面跳转
    // RedirectView redirectView = new RedirectView();
    // redirectView.setUrl("http://yahoo.com");
    // return redirectView;
    // }

    public class LoginForm {
        private String username;
        private String password;
        private String db;

        // 添加Getter和Setter方法

        public String getUsername() {
            return username;
        }

        public void setUsername(String username) {
            this.username = username;
        }

        public String getPassword() {
            return password;
        }

        public void setPassword(String password) {
            this.password = password;
        }

        public String getDb() {
            return db;
        }

        public void setDb(String db) {
            this.db = db;
        }
    }

    @PostMapping("/loginForm") // 使用@PostMapping注解的方法，它处理/loginForm端点的POST请求。方法的返回类型是String，表示返回一个页面的名称。它接受三个参数：username、password和signinAccess。
    public ModelAndView handleLoginRequest(@RequestParam("username") String username,
            @RequestParam("password") String password,
            @RequestParam(value = "db", required = false) String signinAccess) {
        System.out.println("Username: " + username); // 打印username、password和signinAccess的值到控制台。这些值是从请求中获取的用户输入数据。
        System.out.println("Password: " + password);
        System.out.println("Signin Access: " + signinAccess);
        if ("db".equals(signinAccess)) { // 检查signinAccess是否等于字符串"db"。如果相等，表示用户请求使用数据库登录。
            // 打开 SQLite 数据库连接
            String projectPath = System.getProperty("user.dir"); // 获取当前项目的路径，并根据路径拼接数据库文件的路径。
            String dbPath = projectPath + "/AdminAccess.db";
            // Connection conn = DriverManager.getConnection("jdbc:sqlite:" + dbPath);
            try (Connection connection = DriverManager.getConnection("jdbc:sqlite:" + dbPath)) { // 使用DriverManager建立与SQLite数据库的连接，并使用try-with-resources语句来自动关闭连接。
                // try (Connection connection =
                // DriverManager.getConnection("jdbc:sqlite:D:/GPIOJava601/AdminAccess.db")) {
                // // 建立与SQLite数据库的连接。
                // 创建表（如果不存在）
                try (Statement statement = connection.createStatement()) { // 创建一个Statement对象，用于执行SQL语句。这里执行的语句是创建名为user的表，如果表不存在的话。
                    statement.executeUpdate("CREATE TABLE IF NOT EXISTS user (username TEXT, accessLevel INTEGER)");
                }
                // 验证帐号密码
                String query = "SELECT * FROM user WHERE username = ? AND accessLevel = ?";
                try (PreparedStatement statement = connection.prepareStatement(query)) { // 执行数据库查询，检查用户名和访问级别是否匹配。使用准备语句（PreparedStatement）来避免SQL注入攻击。如果查询结果存在，表示用户名和访问级别匹配，可以执行其他操作。否则，执行其他操作。
                    statement.setString(1, username);
                    statement.setInt(2, 0);
                    try (ResultSet resultSet = statement.executeQuery()) {
                        if (resultSet.next()) {
                            // 执行 net use 命令等操作
                            String domain = "127.0.0.1";
                            String domain1 = "MSI";

                            try { // 构建命令数组，执行net use命令来进行用户身份验证。使用Runtime.getRuntime().exec()方法在操作系统级别执行命令。
                                String[] cmd = { "net", "use", "\\\\" + domain + "\\IPC$",
                                        "/user:" + domain1 + "\\" + username, password };
                                Process process = Runtime.getRuntime().exec(cmd);

                                BufferedReader reader0 = new BufferedReader(
                                        new InputStreamReader(process.getInputStream()));
                                String line0;
                                while ((line0 = reader0.readLine()) != null) { // 读取命令执行的标准输出，并打印到控制台。
                                    System.out.println("stdout: " + line0);
                                }

                                BufferedReader errorReader = new BufferedReader(
                                        new InputStreamReader(process.getErrorStream()));
                                String errorLine;
                                while ((errorLine = errorReader.readLine()) != null) { // 读取命令执行的错误输出（标准错误），并打印到控制台。
                                    System.err.println("stderr: " + errorLine);
                                }

                                int exitCode = process.waitFor();
                                if (exitCode == 0) { // 等待命令执行完成，并获取命令的退出代码。如果退出代码为0，表示命令执行成功，执行登录成功的逻辑。否则，执行登录失败的逻辑。
                                    // 登录成功的逻辑
                                    System.out.println("登录成功");
                                    // return "redirect:/AdminPage3.html";
                                    ModelAndView modelAndView = new ModelAndView("redirect:/AdminPage3.html");
                                    return modelAndView;
                                    // return "/AdminPage3.html";
                                } else {
                                    // 登录失败的逻辑
                                    System.err.println("登录失败");
                                    // 处理其他情况
                                    // ...
                                    System.err.println("net use process exited with code " + exitCode);
                                }
                            } catch (IOException | InterruptedException e) { // 捕获执行命令过程中可能抛出的异常。
                                e.printStackTrace();
                            }
                        } else {
                            query = "SELECT username FROM user WHERE username = ?";
                            // 打开 SQLite 数据库连接
                            String projectPath1 = System.getProperty("user.dir"); // 获取当前项目的路径，并根据路径拼接数据库文件的路径。
                            String dbPath1 = projectPath1 + "/AdminAccess.db";
                            // Connection conn1 = DriverManager.getConnection("jdbc:sqlite:" + dbPath1);
                            // try (Connection connection1 =
                            // DriverManager.getConnection("jdbc:sqlite:D:/GPIOJava601/AdminAccess.db");PreparedStatement
                            // statement1 = connection1.prepareStatement(query)){
                            try (Connection connection1 = DriverManager // 首先，定义了一个查询语句query，通过预处理语句（PreparedStatement）的方式防止SQL注入攻击。
                                    .getConnection("jdbc:sqlite:" + dbPath1); // 使用DriverManager.getConnection()方法建立与SQLite数据库的连接。
                                    PreparedStatement statement1 = connection1.prepareStatement(query)) {
                                statement1.setString(1, username); // 使用连接对象connection1创建预处理语句对象statement1，并将用户名绑定到查询语句中的参数。
                                try (ResultSet resultSet1 = statement1.executeQuery()) { // 运行查询语句，将结果存储在结果集对象resultSet1中。
                                    if (resultSet1.next()) { // 判断结果集是否存在下一行数据，如果存在，表示用户名存在，可以执行其他操作。否则，用户名不存在，执行其他操作。
                                        String accessLevelQuery = "SELECT accessLevel FROM user WHERE username = ?";
                                        try (PreparedStatement accessStatement = connection1
                                                .prepareStatement(accessLevelQuery)) { // 定义访问级别查询语句accessLevelQuery，同样使用预处理语句（PreparedStatement）防止SQL注入攻击。
                                            accessStatement.setString(1, username); // 使用连接对象connection1创建预处理语句对象accessStatement，将用户名绑定到查询语句中的参数。
                                            try (ResultSet accessResult = accessStatement.executeQuery()) { // 执行访问级别查询语句，将结果存储在结果集对象accessResult中。
                                                if (accessResult.next()) { // 判断结果集是否存在下一行数据，如果存在，表示访问级别查询成功。
                                                    int accessLevel = accessResult.getInt("accessLevel");
                                                    if (accessLevel != 0) { // 获取访问级别（accessLevel）的值，并根据其值执行相应的操作。如果访问级别不等于0，可能表示访问权限不足，可以向前端返回相应的错误信息。
                                                        // 用户名存在，但访问级别不匹配，向前端返回错误信息

                                                    } else { // 如果结果集不存在下一行数据，表示访问级别查询失败或用户不存在，可以向前端返回相应的错误信息。
                                                        // 用户名存在且accessLevel为0，进行其他操作或跳转页面
                                                        // ...
                                                    }
                                                } else {

                                                }
                                            }
                                        }
                                    } else {
                                        // 用户名不存在，向前端返回错误信息
                                    }
                                }
                            } catch (SQLException e) { // 捕获与数据库相关的异常。
                                e.printStackTrace();
                            }
                        }
                    }
                }
            } catch (SQLException e) {
                e.printStackTrace();
            }
        } else { // 使用JDBC建立与数据库的连接，连接到名为AdminAccess.db的SQLite数据库。
                 // 打开 SQLite 数据库连接
            String projectPath1 = System.getProperty("user.dir"); // 获取当前项目的路径，并根据路径拼接数据库文件的路径。
            String dbPath1 = projectPath1 + "/AdminAccess.db";
            try (Connection connection = DriverManager.getConnection("jdbc:sqlite:" + dbPath1)) {
                // 创建表（如果不存在）
                try (Statement statement = connection.createStatement()) { // 创建一个Statement对象，用于执行SQL语句。这里执行的语句是创建名为user的表，如果表不存在的话。
                    statement.executeUpdate("CREATE TABLE IF NOT EXISTS user (username TEXT, accessLevel INTEGER)");
                }
                // 验证帐号密码
                String query = "SELECT * FROM user WHERE username = ?"; // 定义查询语句query，用于在user表中查找与给定用户名匹配的记录。
                try (PreparedStatement statement = connection.prepareStatement(query)) { // 使用连接对象connection创建预处理语句对象statement，将用户名绑定到查询语句中的参数。
                    statement.setString(1, username);
                    try (ResultSet resultSet = statement.executeQuery()) { // 执行查询语句，将结果存储在结果集对象resultSet中。
                        if (resultSet.next()) { // 判断结果集是否存在下一行数据，如果存在，表示用户名存在且与密码匹配。
                            // 执行 net use 命令等操作
                            String domain = "127.0.0.1";
                            String domain1 = "MSI";
                            String[] cmd = { "net", "use", "\\\\" + domain + "\\IPC$",
                                    "/user:" + domain1 + "\\" + username, password };
                            Process process = Runtime.getRuntime().exec(cmd); // 通过Runtime.getRuntime().exec(cmd)执行操作系统命令，命令参数存储在字符串数组cmd中。

                            BufferedReader reader1 = new BufferedReader( // 使用BufferedReader读取命令执行过程中的标准输出和错误输出，并将其打印到控制台。
                                    new InputStreamReader(process.getInputStream()));
                            String line1;
                            while ((line1 = reader1.readLine()) != null) {
                                System.out.println("stdout: " + line1);
                            }

                            BufferedReader errorReader = new BufferedReader(
                                    new InputStreamReader(process.getErrorStream()));
                            String errorLine;
                            while ((errorLine = errorReader.readLine()) != null) {
                                System.err.println("stderr: " + errorLine);
                            }

                            int exitCode = process.waitFor(); // 使用process.waitFor()等待命令执行完成，并获取退出代码（exit code）。
                            if (exitCode == 0) { // 如果退出代码为0，表示命令执行成功。
                                String[][] queries = { // 定义一个二维数组queries，其中存储了访问级别和重定向页面的对应关系。
                                        { "0", "/GPIOtool4.html" },
                                        { "1", "/GPIOtool4.html" },
                                        { "2", "/GPIOtool5.html" },
                                        { "3", "/GPIOtool5.html" }
                                };

                                for (String[] q : queries) {
                                    int accessLevel = Integer.parseInt(q[0]);
                                    String redirectPage = q[1];
                                    String accessLevelQuery = "SELECT * FROM user WHERE username = ? AND accessLevel = ?";
                                    try (PreparedStatement accessLevelStatement = connection
                                            .prepareStatement(accessLevelQuery)) { // 定义访问级别查询语句accessLevelQuery，使用预处理语句，并将用户名和访问级别绑定到查询语句中的参数。
                                        accessLevelStatement.setString(1, username);
                                        accessLevelStatement.setInt(2, accessLevel);

                                        try (ResultSet accessLevelResult = accessLevelStatement.executeQuery()) { // 执行访问级别查询语句，将结果存储在结果集对象accessLevelResult中。
                                            if (accessLevelResult.next()) { // 判断结果集是否存在下一行数据，如果存在，表示用户具有相应的访问级别。
                                                // return redirectPage; // 返回重定向页面。
                                                // 用户具有相应的访问级别，执行重定向
                                                return new ModelAndView("redirect:" + redirectPage);
                                                // 根据不同的访问级别进行重定向
                                                // int AccessLevel = resultSet.getInt("accessLevel");
                                                // switch (AccessLevel) {
                                                // case 0:
                                                // case 1:
                                                // return "GPIOtool4.html";
                                                // break;
                                                // case 2:
                                                // case 3:
                                                // return "GPIOtool5.html";
                                                // break;
                                                // default:
                                                // // 处理其他访问级别
                                                // // ...
                                                // }
                                            } else { // 如果结果集不存在下一行数据，表示用户名不存在或密码不匹配。
                                                // Handle other cases if needed
                                            }
                                        }
                                    }
                                }
                            } else { // 退出代码不为0，可能表示密码错误。
                                System.err.println("net use process exited with code " + exitCode);
                            }
                        } else {
                            // 处理其他情况
                            // ...
                        }
                    } catch (InterruptedException | IOException e) { // 异常处理块，用于捕获并处理可能抛出的InterruptedException和IOException异常。
                        // TODO Auto-generated catch block
                        e.printStackTrace(); // 将异常信息打印到标准错误流（Standard Error Stream）。
                    }
                }
            } catch (SQLException e) { // 连接数据库、执行查询或更新操作时可能会抛出此异常。
                e.printStackTrace();
            }
        }
        // return "redirect:/login3"; // 或者根据需要返回其他页面的名称
        ModelAndView modelAndView = new ModelAndView("redirect:/login3.html");
        return modelAndView;
    }
}