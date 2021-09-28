#include <LiquidCrystal.h>

#define printByte(args) write(args);
uint8_t S1[8] = {0x00,0x0E,0x0A,0x0A,0x0A,0x0A,0x0E,0x00}; //1
uint8_t S2[8] = {0x00,0x08,0x00,0x00,0x00,0x02,0x00,0x00}; //2
uint8_t S3[8] = {0x00,0x08,0x00,0x04,0x00,0x02,0x00,0x00}; //3
uint8_t S4[8] = {0x00,0x0A,0x00,0x00,0x00,0x0A,0x00,0x00}; //4 
uint8_t S5[8] = {0x00,0x0A,0x00,0x04,0x00,0x0A,0x00,0x00}; //5
uint8_t S6[8] = {0x00,0x0A,0x00,0x0A,0x00,0x0A,0x00,0x00}; //6 

int x;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// GND=可變電阻1 VCC=可變電阻3  V0=可變電阻2 
// RS = 12,RW=GND E = 11, DB4 = 5, DB5 = 4,DB6 = 3,DB7 = 2
// LED=電阻 LED=GND

void setup() {
  
  lcd.begin(16, 2); // 設定 LCD 範圍 一排 16 格 共 2 條
  lcd.print("hello, world!");
  
  /*
  亂樹種子碼(使用類比讀取沒有使用的腳為(不要定義 pinMode)
  */
  randomSeed(analogRead(1)); 
  
}

void loop() {
  
  /*
  方法一：
    兩位數與一位數同時使用時，可以在顯示下一次數字前，
    使用同一位置顯示 16 個空格
  */
  lcd.setCursor(0, 1); // 設定圖示的起始位置
  lcd.println("                    ");
  /* 
  利用亂樹種子碼產生自定義的範圍 random(最小範圍, 最大範圍-1); 
  隨機抓取範圍內 1 數值 再列印到 LCD 上
  */
  lcd.setCursor(0, 1);
  lcd.print(random(1, 20)); 
  
  /*
  方法二：
    兩位數與一位數同時使用時，可以判斷小於 10 的情況,
    先列印 1 空格在列印數值
  */
  lcd.setCursor(4, 1); // 設定圖示的起始位置
  x = random(1, 20);
  
  if(x < 9){
    
    lcd.print(" ");
    lcd.print(x);
    
  }
  
  if(x > 9){
    
    lcd.print(x);
    
  }
  
  delay(1000);
    
}
