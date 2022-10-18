#ifndef LVGL_H
#define LVGL_H

#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>



class Lvgl : public Adafruit_SSD1306 {
  public:
    Lvgl(int width_p , int height_p , int adddress_p );
    ~Lvgl() {};//width_p为屏幕的宽，heighit_p屏幕高，adddress_p设备IIC地址
    void text(String text_p, int x, int y);//text_p需要显示的文本,x,y为起始坐标
    void button(String text_p);//按钮内的文本
  private:
  protected:
};

#endif