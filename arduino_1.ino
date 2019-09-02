#include<AFMotor.h>
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

int joyPin1 = 0;                 
int joyPin2 = 1; 
int value1 = 0;               
int value2 = 0;                 

int valy = 0;
int valx = 0;

void setup() {
  // put your setup code here, to run once:
motor1.setSpeed(0);
motor2.setSpeed(0);
motor3.setSpeed(0);
motor4.setSpeed(0);
Serial.begin(9600);
}

void loop() {

  valy = analogRead(joyPin1);
  valx = analogRead(joyPin2);
  Serial.println(valy);
  Serial.println(valx);
  //delay(500);

  //y-axis

  if( (valy > 1020) && (valy <= 1024)){         //backward
    
  //valy = map(valy, 526, 1024, 0, 255);
  //Serial.println(valy);
  
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);  

  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);

  goto l;

  }

  else if( (valy >= 0) && (valy <= 10) ) {     //forward
    
  //valy = map(valy, 512, 0, 0, 255);
  //Serial.println(valy);
  
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);  

  
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);  

  goto l;

  }

  else{

        motor1.setSpeed(0);
        motor2.setSpeed(0);
        motor3.setSpeed(0);
        motor4.setSpeed(0);                  //stop
        
  }

  
  //x-axis


  if( (valx > 1020) && (valx <= 1024)) {         //left
    
  //valx = map(valx, 750, 1024, 0, 255);
  
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);  
  

  motor1.run(FORWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(FORWARD);

  goto l;

  }

  else if( (valx >= 0) && (valx <= 10)) {     //right
    
  //valy = map(valx, 300, 0, 0, 255);
  
  motor1.setSpeed(255);
  motor2.setSpeed(255);
  motor3.setSpeed(255);
  motor4.setSpeed(255);  

  
  motor1.run(BACKWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(BACKWARD);  

  goto l;

  }

  else{

        motor1.setSpeed(0);
        motor2.setSpeed(0);
        motor3.setSpeed(0);
        motor4.setSpeed(0);                  //stop
      
  }  

 l:
 Serial.println();

 }
