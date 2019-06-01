/**
   电位器控制呼吸灯频率
   Arduino通过模拟输入口A0读入经过电位器分压的电压，
   程序通过判断电压的大小，来调节LED的闪烁频率。
   呼吸频率修改，即是修改每次亮度改变后的延时长短。
   因此我们将原来的延时函数中固定的参数替换为变量time，
   通过time的变化，来调节LED呼吸频率的变化。
*/

int ledPin = 9;
int pot = A0; //A0引脚读取电位器输出电压

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // LED逐渐变亮
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5) {
    analogWrite(ledPin, fadeValue);
    //读取电位器输出电压，除以5是为了缩短延时时间
    int time = analogRead(pot) / 5;
    delay(time);
  }

  //LED逐渐变暗
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(ledPin, fadeValue);
    delay(analogRead(pot) / 5);
  }

}
