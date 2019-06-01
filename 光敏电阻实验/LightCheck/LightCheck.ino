/**
 * 光敏电阻检测环境光实验
 * 光敏电阻：一种电阻值随照射光强度增加而下降的电阻。
 * 光敏电阻的使用方法很简单，将其作为一个电阻接入电路中，
 * 然后使用analogRead() 读取电压即可。
 * 这里我们将光敏电阻和一个普通电阻串联，
 * 根据串联分压的方法来读取到光敏电阻上的电压。
 */

void setup() {
  // 初始化串口
  Serial.begin(9600);

}

void loop() {
  // 读取当前光线强度，并输出到串口显示
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  delay(1000);

}
