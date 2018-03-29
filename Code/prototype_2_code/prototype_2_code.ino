int __ardublockAnalogRead(int pinNumber)
{
  pinMode(pinNumber, INPUT);
  return analogRead(pinNumber);
}


void __ardublockDigitalWrite(int pinNumber, boolean status)
{
  pinMode(pinNumber, OUTPUT);
  digitalWrite(pinNumber, status);
}


void setup()
{
  Serial.begin(9600);
}

void loop()
{
<<<<<<< HEAD
  analogWrite(A3 , 125);
  analogWrite(A4 , 125);
  analogWrite(A5 , 125);
=======
  Serial.print("message");
  Serial.print(" ");
  Serial.print(__ardublockAnalogRead(A3));
  Serial.print(" ");
  Serial.println();
  if (( ( ( __ardublockAnalogRead(A3) ) <= ( 100 ) ) && ( ( __ardublockAnalogRead(A3) ) >= ( 35 ) ) ))
  {
    __ardublockDigitalWrite(5, HIGH);
    __ardublockDigitalWrite(6, LOW);
    __ardublockDigitalWrite(9, LOW);
  }
  else
  {
    if (( ( ( __ardublockAnalogRead(A3) ) > ( 100 ) ) && ( ( __ardublockAnalogRead(A3) ) <= ( 150 ) ) ))
    {
      __ardublockDigitalWrite(5, HIGH);
      __ardublockDigitalWrite(6, HIGH);
      __ardublockDigitalWrite(9, LOW);
    }
    else
    {
      if (( ( __ardublockAnalogRead(A3) ) > ( 150 ) ))
      {
        __ardublockDigitalWrite(5, HIGH);
        __ardublockDigitalWrite(6, HIGH);
        __ardublockDigitalWrite(9, HIGH);
      }
      else
      {
        __ardublockDigitalWrite(5, LOW);
        __ardublockDigitalWrite(6, LOW);
        __ardublockDigitalWrite(9, LOW);
      }
    }
  }
>>>>>>> d774fff9df157c508d3df1123f9c1aa2a3efba60
}


