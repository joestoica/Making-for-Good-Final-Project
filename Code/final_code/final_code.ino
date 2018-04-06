int _ABVAR_1_Weight = 0 ;
int _ABVAR_2_Red = 0 ;
int __ardublockAnalogRead(int pinNumber)
{
  pinMode(pinNumber, INPUT);
  return analogRead(pinNumber);
}



void setup()
{
  Serial.begin(9600);
  pinMode(A0 , OUTPUT);
pinMode(A1 , OUTPUT);
pinMode (A2 , OUTPUT);

  _ABVAR_2_Red = ( -5.2 + ( _ABVAR_1_Weight * 2.66 ) ) ;

  Serial.print("message");
  Serial.print(" ");
  Serial.print(__ardublockAnalogRead(A0));
  Serial.print(" ");
  Serial.println();

}

void loop()
{

  for (int i = 0; i <=255; i++){
    analogWrite(3 , i) ;
    analogWrite (5 , 255 ) ;
    analogWrite (6 , 255-i);
    delay (100) ;
    Serial.println( i ) ;
  }

  Serial.println("Getting out of blue"); 
  analogWrite(3 , 255) ;
  analogWrite (5 , 255) ;
  analogWrite (6 , 0);
  delay (1000) ; 
  

  
}
