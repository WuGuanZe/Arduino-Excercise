#include <LiquidCrystal.h>

#define printByte(args) write(args);
uint8_t S1[8] = {0x00,0x0E,0x0A,0x0A,0x0A,0x0A,0x0E,0x00}; //1
uint8_t S2[8] = {0x00,0x08,0x00,0x00,0x00,0x02,0x00,0x00}; //2
uint8_t S3[8] = {0x00,0x08,0x00,0x04,0x00,0x02,0x00,0x00}; //3
uint8_t S4[8] = {0x00,0x0A,0x00,0x00,0x00,0x0A,0x00,0x00}; //4 
uint8_t S5[8] = {0x00,0x0A,0x00,0x04,0x00,0x0A,0x00,0x00}; //5
uint8_t S6[8] = {0x00,0x0A,0x00,0x0A,0x00,0x0A,0x00,0x00}; //6 

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// GND=可變電阻1 VCC=可變電阻3  V0=可變電阻2 
// RS = 12,RW=GND E = 11, DB4 = 5, DB5 = 4,DB6 = 3,DB7 = 2
// LED=電阻 LED=GND

void setup() {
  
  lcd.begin(16, 2); // 設定 LCD 範圍 一排 16 格 共 2 條
  lcd.print("hello, world!123456");
  
  lcd.createChar(0, S1); //編號0 的字元為S1
  lcd.createChar(1, S2); //編號1 的字元為S2
  lcd.createChar(2, S3); //編號2 的字元為S3
  lcd.createChar(3, S4); //編號3 的字元為S4
  lcd.createChar(4, S5); //編號4 的字元為S5
  lcd.createChar(5, S6); //編號5 的字元為S6
  
}

void loop() {
 
  lcd.setCursor(0, 1); // 設定圖示的起始位置
  lcd.print(millis() / 1000); // 列印開機多久
  delay(1000);
  
  lcd.clear(); // 清除螢幕 (包含定位數)
  lcd.setCursor(0, 0); // 設定顯示的起始位置 (0, 0) 為左上角
  lcd.write(byte(0));  //列印編號0的字元
  lcd.printByte(byte(1)); //列印編號0的字元
  lcd.write(byte(1));  //列印編號1的字元
  lcd.write(byte(2));  //列印編號2的字元
  lcd.write(byte(3));  //列印編號3的字元
  lcd.write(byte(4));  //列印編號4的字元
  lcd.write(byte(5));  //列印編號5的字元
  lcd.write(byte(6));  //列印編號6的字元
  lcd.write(byte(7));  //列印編號7的字元
  lcd.write(byte(8));  //列印編號8的字元
  lcd.write(byte(9));  //列印編號9的字元
  
}
