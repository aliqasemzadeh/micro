const int sin1 = A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("ADC0:");
  int analoge1 = analogRead(sin1);
  Serial.println(analoge1);
  if(analoge1 == 0) {
    Serial.println("Sensor is off");
  }
  if(analoge1 % 2 == 0 )
  {
        Serial.println("Sensor is value is even.");
  } else {
        Serial.println("Sensor is value is odd.");
  }
  delay(300);
}
