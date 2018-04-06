void Red();
void RedD();
void Purple();
void Blue();
void TealD();
void NothingD();
void Teal();
void GreenD();
void PurpleD();
void BlueD();
void Nothing();
void Green();

void setup()
{
}

void loop()
{
  RedD();
  delay( 1000 );
  NothingD();
  delay( 1000 );
  PurpleD();
  delay( 1000 );
  NothingD();
  delay( 1000 );
  BlueD();
  delay( 1000 );
  NothingD();
  delay( 1000 );
  TealD();
  delay( 1000 );
  NothingD();
  delay( 1000 );
  GreenD();
  delay( 1000 );
  NothingD();
  delay( 1000 );
}

void Blue()
{
  analogWrite(A0 , 255);
  analogWrite(A1 , 0);
  analogWrite(A2 , 100);
}

void PurpleD()
{
  analogWrite(3 , 0);
  analogWrite(5 , 0);
  analogWrite(6 , 255);
}

void GreenD()
{
  analogWrite(3 , 255);
  analogWrite(5 , 255);
  analogWrite(6 , 0);
}

void Teal()
{
  analogWrite(A0 , 255);
  analogWrite(A1 , 0);
  analogWrite(A2 , 0);
}

void BlueD()
{
  analogWrite(3 , 255);
  analogWrite(5 , 0);
  analogWrite(6 , 255);
}

void Purple()
{
  analogWrite(A0 , 0);
  analogWrite(A1 , 0);
  analogWrite(A2 , 255);
}

void Red()
{
  analogWrite(A0 , 0);
  analogWrite(A1 , 255);
  analogWrite(A2 , 255);
}

void RedD()
{
  analogWrite(3 , 0);
  analogWrite(5 , 255);
  analogWrite(6 , 255);
}

void Nothing()
{
  analogWrite(A0 , 255);
  analogWrite(A1 , 255);
  analogWrite(A2 , 255);
}

void TealD()
{
  analogWrite(3 , 255);
  analogWrite(5 , 0);
  analogWrite(6 , 0);
}

void Green()
{
  analogWrite(A0 , 255);
  analogWrite(A1 , 255);
  analogWrite(A2 , 0);
}

void NothingD()
{
  analogWrite(3 , 255);
  analogWrite(5 , 255);
  analogWrite(6 , 255);
}


