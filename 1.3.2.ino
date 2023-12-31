#include "MQ135.h"
int soilMoistureValue = 0; 
int percentage=0;
#define ANALOGPIN A1 //подключение аналогового сигнального пина 
#define RZERO 206.85
MQ135 gasSensor = MQ135(ANALOGPIN);
boolean noGas; //переменная для хранения значения о присутствии газа
int gasValue = 0; //переменная для хранения количества газа 
void setup()
{
  pinMode(3,OUTPUT);
  float rzero = gasSensor.getRZero(); 
  Serial.begin(9600);
}
void loop() {
  soilMoistureValue = analogRead(A0); 
  float ppm = gasSensor.getPPM();
  Serial.println(percentage);
  Serial.print("CO2 ppm value : ");
  Serial.println(ppm);
  delay(2000); // 2 секунды задержки 
}
