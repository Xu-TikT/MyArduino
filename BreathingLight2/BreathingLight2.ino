/*
 * 呼吸灯的另一种写法
 */
int led = 11;           // LED灯连接在11号引脚
int brightness = 0;     // LED灯亮度
int fadeAmount = 5;   // 亮度渐变值
  
void setup() {
  
  pinMode(led, OUTPUT);
  
}
  
 
  
void loop() {
  
  analogWrite(led, brightness);
  
  brightness = brightness + fadeAmount;
  
  if (brightness == 0 || brightness == 255) {
  
    fadeAmount = -fadeAmount ;
  
  }
  
  delay(30);
  
}
