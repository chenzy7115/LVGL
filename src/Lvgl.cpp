#include "Lvgl.h"

Lvgl::Lvgl(int width_p, int height_p, int adddress_p)
  : Adafruit_SSD1306(width_p, height_p, &Wire, -1) {

  if (!begin(SSD1306_SWITCHCAPVCC, adddress_p)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

  vTaskDelay(100);
  clearDisplay();

  Serial.println("Lvgl 构造函数");
};


void Lvgl::text(String text_p, int x, int y) {
  setTextSize(1);
  setTextColor(WHITE);
  setCursor(x, y);
  println(text_p);
  display();
}


void Lvgl::button(String text_p) {
  fillRoundRect(32, 16, 64, 32, 10, WHITE);//输入按钮x,y,w,h,r参数
  setTextSize(2);
  setTextColor(BLACK);
  setCursor(45, 25);//按钮的起始坐标
  println(text_p);

  display();
}
