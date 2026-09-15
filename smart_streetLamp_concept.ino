
#define LDR_PIN A0

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);

  Serial.print("LDR Value: ");
  Serial.print(ldrValue);

  if (ldrValue > 700) {
    Serial.println(" - Dark condition");
    digitalWrite(LED_BUILTIN, HIGH);
  } 
  else {
    Serial.println(" - Bright condition");
    digitalWrite(LED_BUILTIN, LOW);
  }

  delay(250);
}
