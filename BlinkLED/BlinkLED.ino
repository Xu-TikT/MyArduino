/**
 * LED 闪烁实验
 */
int ledPin = 10;//

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);//定义小灯接口为输出接口
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,HIGH);
  delay(500);
  digitalWrite(ledPin,LOW);
  delay(500);
}
