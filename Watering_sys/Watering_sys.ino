#include <AFMotor.h>
int output_value ;
int water; //random variable
int Moist_sensor = A0; //moisture sensor
AF_DCMotor motor1(1);

void setup() {
   Serial.begin(9600);
   Serial.println("Reading From the Sensor ...");
   motor1.setSpeed(255);
   motor1.run(RELEASE);
   pinMode(Moist_sensor,INPUT); //input pin coming from soil 

   }

void loop() {
   output_value= analogRead(Moist_sensor);
   Serial.print("Mositure : ");
   Serial.print(output_value);
   delay(3000);
   
   if(output_value  <= 300){
   Serial.println("Moisture is high");
   motor1.run(RELEASE);
   delay(2000);
    } 

    else{
    Serial.println("Moisture is Low");
    motor1.run(FORWARD);
    delay(5000);
      
      }

      }
   
