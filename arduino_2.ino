#include <AFMotor.h>
#include <Servo.h>              // Add library

Servo myservo;               // Define any servo name
AF_DCMotor motor1(1);

int joyPin1 = 0;                 
int joyPin2 = 1; 
int value1 = 0;               
int value2 = 0;                 

int valy = 0;
int valx = 0;

void setup() {
  
myservo.attach(10);          // Define the servo signal pins
motor1.setSpeed(0);
Serial.begin(9600);

}

void loop() {

  valy = analogRead(joyPin1);
  valx = analogRead(joyPin2);
  Serial.println(valy);
  Serial.println(valx);
 // delay(500); 

 myservo.attach(10);
  
 if((valx > 1000) && (valx <= 1024))    //left
 {
    myservo.write(0);
    delay(100);
    myservo.detach();
    goto l;
  
 }else if((valx >= 0) && (valx <= 10))
 {
    myservo.write(180);
    delay(100);
    myservo.detach();
    goto l;
  
 }else{

    //Serial.println("Center");
    myservo.detach();
    
 }

 
  if( (valy > 1000) && (valy <= 1024)){         //backward
  
  motor1.setSpeed(255);
  motor1.run(FORWARD);
  goto l;

  }

  else if( (valy >= 0) && (valy <= 10) ) {     //forward
    
  motor1.setSpeed(255);
  motor1.run(BACKWARD);
  goto l;

  }else{

        motor1.setSpeed(0);
        
  }

 l:
 Serial.println();
 
}
