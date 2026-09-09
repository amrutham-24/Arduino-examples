const int BUTTON_PIN = 12; // Button on Pin 12
const int LED_PIN = 7;     // External LED on Pin 7

bool ledState = false;
int lastButtonState = HIGH;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() {
  int currentButtonState = digitalRead(BUTTON_PIN);

  // Trigger only on press (transition from HIGH to LOW)
  if (lastButtonState == HIGH && currentButtonState == LOW) {
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState ? HIGH : LOW);
    delay(50); // Debounce delay
  }

  lastButtonState = currentButtonState;
}
