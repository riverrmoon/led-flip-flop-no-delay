const int led = 2;
const int led2 = 22;
const int leds[] = { led, led2 };
unsigned long current;
const long interval = 1000;
bool state = 0;
void setup() {
  Serial.begin(9600);
  for (int i = 0; i <= 1;i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
    Serial.println(i);
    delay(1000);
  }
  Serial.println("setup selesai");
}

void loop() {
  for (int i=1; i >= 0;) {
    if ((millis() - current) >= interval) {
      current = millis();
      digitalWrite(leds[i], HIGH);
      Serial.println(i);
      i--;
    }
    digitalWrite(leds[i], LOW);
  }
}
