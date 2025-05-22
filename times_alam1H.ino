const int motorPin = 9;
const unsigned long interval = 3600000; // 1 ชั่วโมง = 3,600,000 มิลลิวินาที
unsigned long previousMillis = 0;

void setup() {
  pinMode(motorPin, OUTPUT);
  digitalWrite(motorPin, LOW);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    // สั่งงานเมื่อครบ 1 ชั่วโมง (เช่น เปิดมอเตอร์ 5 วินาที)
    digitalWrite(motorPin, HIGH);
    delay(5000);
    digitalWrite(motorPin, LOW);
  }
}
