#ifndef ULTRASOUND
#define ULTRASOUND
#include <Arduino.h>
class ultraSound {
public:
  void setPin(int Pin1,int Pin2) ;
  double distance();
  double distanceVar;
private:
	int trigPin;
  int echoPin;
  double time;
};
#endif