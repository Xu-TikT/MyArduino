/**
 * 使用电位器控制舵机
 */
#include <Servo.h>

Servo servo;
int potpin = A0;//存储电位器的模拟值
int val;//存储舵机角度位置

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
}

void loop() {
  val = analogRead(potpin);//读取电位器控制的模拟值（范围在0~1023）
  //scale it to use it with the servo(value between 0~180)
  val = map(val,0,1023,0,179);
  servo.write(val);//指定舵机转向的角度
  delay(15);


}
