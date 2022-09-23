#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  int iVal;
  int cVal;
  String judgement;

  iVal = analogRead(A0);
  cVal = float(map(iVal, 0, 1023, 0, 50));
  if (cVal < 10)
    judgement = "Cold!";
  else if (cVal > 10 && cVal <= 15)
    judgement = "Cool";
  else if (cVal > 15 && cVal <= 25)
    judgement = "Perfect";
  else if (cVal > 25 && cVal <= 30)
    judgement = "Warm";
  else if (cVal > 30 && cVal <= 35)
    judgement = "Hot";
  else if (cVal > 35)
    judgement = "Too Hot!";


  //Serial.println("Digitized Value = " + String(iVal));
  //Serial.println("Digitized Value = " + String(iVal) + " is equivalent to an Analog Voltage = " + String(cVal));

  Serial.println("Digitized output of " + String(iVal) +  " Which is equivalent to a temperature: " + String(cVal) + ", "  + judgement );  
  delay(2000);
  // put your main code here, to run repeatedly:
}