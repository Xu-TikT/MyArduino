
/*
 * 呼吸灯实验
 */

int ledPin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
}

void loop(){
  //LED逐渐变亮
  for(int fadeValue = 0; fadeValue <= 255; fadeValue += 5){
    analogWrite(ledPin,fadeValue);
    delay(30);
  }
//LED逐渐变暗
  for(int fadeValue = 255; fadeValue >=0;fadeValue -=5){
    analogWrite(ledPin,fadeValue);
    delay(30);
  }
}
