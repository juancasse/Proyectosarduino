#include <AFMotor.h>
#include <Servo.h>
Servo cabezal;	// create servo object to control a servo
AF_DCMotor M1(1);
AF_DCMotor M2(2);
int pos = 90;	
int sensorizq;
int sensorder;
int test;



void setup() {
  M1.setSpeed(200);
  M2.setSpeed(200);
  cabezal.attach(10); 
  Serial.begin(9600);
}

void loop() {
  sensorder=analogRead(A0);
  sensorizq=analogRead(A1);
  test=analogRead(A2);
  Serial.print(sensorder);
  Serial.print(" , ");
  Serial.print(sensorizq);
  Serial.print(" , ");
  Serial.print(test);
  Serial.print("\n");

  //M1.run(FORWARD);
  //M2.run(FORWARD);

  //cabezal.write(50);
	//delay(3000);
	//cabezal.write(90);
	//delay(3000);
  //cabezal.write(120);
	//delay(3000);
  //cabezal.write(90);
  delay(1500);
}
