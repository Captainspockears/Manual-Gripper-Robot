#include <AFMotor.h>
#include <Servo.h>              // Add library
Servo name_servo;               // Define any servo name

int joyPin1 = 0;                 
int joyPin2 = 1; 
int value1 = 0;               
int value2 = 0;                 

int valy = 0;
int valx = 0;

void setup() {
  
name_servo.attach (10);          // Define the servo signal pins
name_servo.write(0);
Serial.begin(9600);

}

void loop() {

//  valy = analogRead(joyPin1);
  valx = analogRead(joyPin2);
//  Serial.println(valy);
  Serial.println(valx);
  //delay(500); 
  
 if((valx > 1020) && (valx <= 1024))    //left
 {

    name_servo.write(90);
  
 }else if((valx >= 0) && (valx <= 10))  //right
 {

    name_servo.write(270);
  
 }
 
}
