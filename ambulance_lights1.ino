// C++ code
//
int led1 =13;
int led2=12;
void setup()
{
  pinMode(led1, OUTPUT);
   pinMode(led1, OUTPUT);
  
}

void loop()
{
  digitalWrite(led1, HIGH);
   delay(400); // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);
  
  digitalWrite(led2, HIGH);
  delay(400); // Wait for 1000 millisecond(s)
  digitalWrite(led2, LOW);
}