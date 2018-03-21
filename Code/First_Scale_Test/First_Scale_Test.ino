int FSR_Pin = A2; 

void setup()
{
Serial.begin(9600);
pinMode(A3 , OUTPUT);
pinMode(A4 , OUTPUT);
pinMode (A5 , OUTPUT);
}

void loop(){
int FSRReading = analogRead(FSR_Pin);
analogWrite(A3 , 0);
analogWrite(A4 , 0);
analogWrite(A5 , 255);
Serial.println(FSRReading);
delay(250); //just here to slow down the output for easier reading

}
