/*
 * PWM 调控灯光亮度实验 
 * PWM:脉冲宽度调制，简称脉宽调制，是一种对模拟信号电平进行数字编码的方法
 * PWM被用在调光工具，电机调试速，声音的制作等
 * Arduino有6个PWM接口：3、5、6、9、10、11，即数字前带~标志
 */
 int ledPin = 11;
 int potPin = 0;//定义模拟接口0
 int val = 0;//暂存来自传感器的变量数值

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  //注意，模拟接口自动设置为输入
}

void loop(){
  for(int fadeValue = 0; fadeValue <= 255; fadeValue += 5){
    analogWrite(ledPin,fadeValue);
    delay(30);
  }

  for(int fadeValue = 255; fadeValue >=0;fadeValue -=5){
    analogWrite(ledPin,fadeValue);
    delay(30);
  }
}
//void loop() {
//  // put your main code here, to run repeatedly:
//  //LED逐渐变亮
//  for(int fadeValue = 0; fadeValue <= 255; fadeValue += 5){
//    analogWrite(ledPin,fadeValue);
//    int time = analogRead(potPin/5);
//    delay(time);
//  }
//  //LED逐渐变暗
//  for(int fadeValue = 255; fadeValue >=0;fadeValue -=5){
//    analogWrite(ledPin,fadeValue);
//    delay(analogRead(potPin/5));
//  }
////  val = analogRead(potPin);//读取传感器的模拟值并赋值给val
////  Serial.println(val);//显示val值
////  analogWrite(ledPin,val/4);//打开LED并设置亮度
////  delay(100);
//}
