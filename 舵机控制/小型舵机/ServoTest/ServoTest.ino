/**
 * 使用Servo类对小型舵机进行控制
 * servo类下有以下成员函数
 * attach()//连接舵机
 * write()//角度控制
 * writeMicroseconds()//
 * read()//读上一次舵机转动角度
 * attached()//
 * detach()//断开舵机连接
 * 
 * 普通舵机有3根线：GND（黑）、VCC（红）、Signal（黄），
 * 一般情况下，我们建议为舵机单独供电，此处实验为了图方便，
 * 用arduino为舵机供电。
 */
#include <Servo.h>
Servo servo;//创建一个舵机控制对象，servo类最多可以控制8个舵机
int pos = 0;//存储舵机的角度位置

void setup() {
  // 该舵机由第9引脚控制
  servo.attach(9);

}

void loop() {

    for(pos = 0;pos<180; pos +=1){//从0度到180度运动

      servo.write(pos);//指定舵机转向的角度
      delay(15);//等待15ms让舵机到达指定位置
    }

    for(pos = 180; pos>=1; pos -=1){
      servo.write(pos);
      delay(15);
    }

    
}
