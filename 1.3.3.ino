int sensorPin = 4; 
int flame;
void setup() 
{
  pinMode(sensorPin, INPUT); 
  Serial.begin(9600);
}
void loop() {
  flame = digitalRead(sensorPin); 
  if (flame == 1)
  {
  Serial.println("Обнаружено пламя"); 
  delay(150);
  } 
  else {
    Serial.println("Пламя не обнаружено"); 
  }
// delay(500); 
}
