#include <Servo.h>

Servo myServo;
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  
  myServo.attach(9);
  myServo.write(0);

  Serial.println("System Ready with my 3 IR SENSEOR and 2 SERVO MOTOR");
  // put your setup code here, to run once:

}

void loop() {
  int left1 = digitalRead(2);
  int main2 = digitalRead(3);
  int right3 = digitalRead(4);

  if(left1 == 0 || main2 == 0 || right3 == 0){
    if(left1 == 0){
      Serial.println("Sensor 1 detected obj rotated 90degree");
    }
    if(main2 == 0){
      Serial.println("Sensor 2 detected obj");
    }
    if(right3 == 0){
      Serial.println("Sensor 3 detected obj");
    }
  }
  myServo.write(90);
  delay(1000);

  Serial.println("Rotation complete");
  delay(1000);
  // put your main code here, to run repeatedly:

}
