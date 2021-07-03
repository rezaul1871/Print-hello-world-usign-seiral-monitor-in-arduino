// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.println("HELLO WORLD");  // YOU CAN TYPE ANYTHING INTO THIS AND THAT WILL BE PRINT IN SERIAL MONITOR 
  digitalWrite(13, HIGH);
  Serial.println("LED ON");
  delay(1000); // Wait for 1000 millisecond(s)
  
  digitalWrite(13, LOW);
  Serial.println("LED OFF");
  delay(1000); // Wait for 1000 millisecond(s)
}