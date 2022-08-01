#include <Servo.h> 
int servoPin=9;
int servoRev=0;
int servoPos=95;
Servo myServo;
String cmd;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
while (Serial.available()==0){
}
cmd=Serial.readStringUntil('\r');
if (cmd=="MASK OFF"){
  // on the servo and splash the sanitizer
delay(1000);
myServo.write(servoPos);
delay(1000);
myServo.write(servoRev);
delay(300);
myServo.write(servoPos);
myServo.write(servoRev);
} 
 
}
