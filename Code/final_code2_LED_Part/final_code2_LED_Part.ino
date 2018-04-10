#include <HX711.h>
#include "HX711.h"

#define calibration_factor -7050.0 //This value is obtained using the SparkFun_HX711_Calibration sketch

#define DOUT  3
#define CLK  2

HX711 scale(DOUT, CLK);

void setup(){
  Serial.begin(9600);  
  scale.set_scale(calibration_factor); //This value is obtained by using the SparkFun_HX711_Calibration sketch
  scale.tare(); //Assuming there is no weight on the scale at start up, reset the scale to 0

}

void loop() {
  float weight = (scale.get_units());
  Serial.print("Reading: ");
  Serial.print(weight); //scale.get_units() returns a float
  Serial.print(" lbs"); //You can change this to kg but you'll need to refactor the calibration_factor
  Serial.println();

  int max_weight = 10 ;
  int red = (weight * ( 255 / max_weight)) ;
  int green = 255 + (weight * (-255 / max_weight));
  
    
  if (weight > max_weight) {
    analogWrite (9,255);
    analogWrite (10, 255);
    analogWrite (11, 0);
    
   } else if (weight <= max_weight && weight >= 0) {
      analogWrite(9, red);
      analogWrite (10, 255);
      analogWrite (11, green);
   } else { 
    analogWrite (9, 0);
    analogWrite (10, 255);
    analogWrite (11, 255);
   }
}

     
    
  

 
  

  

