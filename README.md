# LVGL模拟实验，在SSD1306_OLED上实现
1.具体效果看pic目录下得图片

2.实现在OLED上创建静态文字和按钮

3.devBorad:ESP32 framwork:arduino OS:freeRTOS tools:VScode

# 修改IIC默认引脚方法：

![Wire_SDA](https://user-images.githubusercontent.com/107073854/198018804-6276e670-6b8f-4068-b498-68c73eadd4d5.png)


# 悲惨的教训

1.做实验时，一定要对连接跳线进行测试。由于未对跳线进行测试，实例一直未能显示。一直检查连接是否正常和各个库和代码，直到最后突然意识到是不是物理连接不通时，才对所有杜邦线进行测试。发现连接OLED的四根跳线中的三根是短路的。白白浪费一天时间。切记！切记！切记！


                                   by chenzy
                                   2022-10-18
