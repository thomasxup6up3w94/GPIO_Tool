package com.example.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import java.net.URI;
import java.awt.Desktop;

@SpringBootApplication
public class GPIOApplicationEntry {

	public static void main(String[] args) {
		SpringApplication.run(GPIOApplicationEntry.class, args);
		// 開啟本地端網頁
		String url = "http://localhost:8080"; // 請根據實際的網址進行更改
		openWebpage(url);
	}

	// 開啟網頁方法
	private static void openWebpage(String url) {
		if (Desktop.isDesktopSupported()) {
			Desktop desktop = Desktop.getDesktop();
			try {
				desktop.browse(new URI(url));
			} catch (Exception e) {
				e.printStackTrace();
			}
		} else {
			System.out.println("無法開啟瀏覽器。");
		}
	}
}
