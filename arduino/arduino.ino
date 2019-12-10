//#include <ESP32Servo.h>
//
////data received from serial port
//char val;
//
////setup
//const int pinHead = 15;
//float light = 0 
//
////servos
//Servo HeadServo;
//
//void setup() {
//  Serial.begin(115200);
//
//  //pins
//  HeadServo.attach(pinHead);
//
//  //initial positioning
//  HeadServo.write(0);
//}
//
//void loop() {
//  if (Serial.available()) {
//    val = Serial.read();
//  }
//
//  light = analogRead(4); 
//  Serial.print(light);
//
//  if (val == '1') {
//    HeadServo.write(180);
//    delay(500);
//    HeadServo.write(0);
//    delay(300);
//  }
//
//  //make her look
//  if (val == '0') {
//    HeadServo.write(180);
//  }
//}

#include <ESP32Servo.h>

//data received from serial port
char val;

//setup
const int pinHead = 15;
float light = 0; 

//servos
Servo HeadServo;

void setup() {
  Serial.begin(115200);

  //pins
  HeadServo.attach(pinHead);

  //initial positioning
  HeadServo.write(0);
}

void loop() {
//  if (Serial.available()) {
//    val = Serial.read();
//  }
////
//      HeadServo.write(60);
//      delay(1000);
//      HeadServo.write(0);
//      delay(2000);
//      HeadServo.write(120);
//       delay(3000);

     delay(5000);
      HeadServo.write(180);

}
