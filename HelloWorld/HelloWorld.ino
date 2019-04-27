/*
 * 当Arduino收到R字符时
 * 回显hello world
 */

int val;//定义变量val
int ledpin = 13;//定义数字接口13


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//设置波特率9600
  pinMode(ledpin,OUTPUT);//设置数字13为输出接口，Arduino上我们用到的I/O口都要进行类似的定义

}

void loop() {
  // put your main code here, to run repeatedly:
  val = Serial.read();//读取PC机发送给Arduino的指令或字符，并将该指令或字符赋给val
  if(val=='R'){
    digitalWrite(ledpin,HIGH);//点亮数字13口LED
    delay(500);
    digitalWrite(ledpin,LOW);//熄灭数字13口LED
    delay(500);
    Serial.println("Hello World!");
  }
}
