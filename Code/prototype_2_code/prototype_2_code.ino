void setup()
{pinMode(A3 , OUTPUT);
pinMode(A4 , OUTPUT);
pinMode (A5 , OUTPUT);
}

void loop()
{
  analogWrite(A3 , 255);
  analogWrite(A4 , 0);
  analogWrite(A5 , 255);
}



