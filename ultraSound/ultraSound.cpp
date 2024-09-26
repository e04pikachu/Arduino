#include "ultraSound.h"

void ultraSound::setPin(int Pin1, int Pin2) {//此方法用於設定超音波模組腳位
  trigPin = Pin1;
  echoPin = Pin2;
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  digitalWrite(trigPin,LOW);
}
double ultraSound::distance(){//回傳距離(單位：公尺)
  digitalWrite(trigPin,HIGH );
  delay(1)
  digitalWrite(trigPin,LOW);
  time = pulseIn(echoPin,HIGH);
  distanceVar = time*0.034/200;
  return distanceVar;
}

