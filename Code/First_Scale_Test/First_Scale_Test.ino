int _ABVAR_1_Weight = 0 ;
int _ABVAR_2_Red = 0 ;
int __ardublockAnalogRead(int pinNumber) ;
int FSR_Pin = A2; 

void setup()
{
Serial.begin(9600);
pinMode(A0 , OUTPUT);
pinMode(A4 , OUTPUT);
pinMode (A5 , OUTPUT);
_ABVAR_1_Weight = 55 ;
_ABVAR_2_Red = (-5.2 + ( _ABVAR_1_Weight * 2.66) ) ;
Serial.print ("message");
Serial.print(" ");
  Serial.print(__ardublockAnalogRead(A0));
  Serial.print(" ");
  Serial.println(); 
}

void loop(){
int FSRReading = analogRead(FSR_Pin);
analogWrite(A0 , _ABVAR_2_Red);
analogWrite(A4 , 0);
analogWrite(A5 , 255);
Serial.println(FSRReading);
delay(250); //just here to slow down the output for easier reading

}
