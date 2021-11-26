#include <Servo.h>    //匯入 servo 這個 library
 
Servo servoSpin, servoClaw, i, j;   // 建立 servoSpin, servoClaw, i, j 這些 Servo 物件 

int servoClawopen = 10;    // 設定夾爪開啟的角度
int servoClawclose = 40;    // 設定夾爪關閉的角度

void setup() { 
  Serial.begin(9600);
  
  servoSpin.attach(2);    // 指定伺服馬達的腳位在 Arduino Uno 的 哪個 pin
  servoClaw.attach(7); 
  i.attach(4);
  j.attach(5); 
  
  Serial.println("start");
} 
 
void loop() {
  
  for (int x = 1; x<90; x++) {    // 使伺服馬達 servoSpin 一度一度由 1 度旋轉到 90 度
    servoSpin.write(x);
    delay(20);
    Serial.println("start1"); 
  }
  
  for(int x = 60; x<150; x++) {   // 使伺服馬達 j 一度一度由 60 度旋轉到 150 度
    j.write(x);
    delay(20);
    Serial.println("start2");
  }
  
  for (int x = 0; x<3; x++) {   // 使爪子開關三次
    servoClaw.write(servoClawclose);
    delay(200);
    Serial.println("0 angle");
    servoClaw.write(servoClawopen);
    delay(200);
    Serial.println("30 angle");
  }
  delay(1000);
  
  servoClaw.write(servoClawclose);    // 關爪子
  Serial.println("start3");
  delay(100);
  
  for(int x = 90; x>1; x--) {   // 使伺服馬達 servoSpin 一度一度由 90 度旋轉到 0 度
    servoSpin.write(x);
    delay(20);
  }
  
  for(int x = 150; x>60; x--) {   // 使伺服馬達 j 一度一度由 150 度旋轉到 60 度
    j.write(x);
    delay(20);
  }
  
  servoClaw.write(servoClawopen);   // 開爪子
  delay(500);
} 
