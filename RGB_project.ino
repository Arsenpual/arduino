// C++ code
//
int i = 0;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // แสดงสีแดง
  analogWrite(11, 255); // แดงสว่างสุด
  analogWrite(10, 0);   // เขียวดับ
  analogWrite(9, 0);    // น้ำเงินดับ
  delay(2000); // รอ 1 วินาที

  // แสดงสีเขียว
  analogWrite(11, 0);   // แดงดับ
  analogWrite(10, 255); // เขียวสว่างสุด
  analogWrite(9, 0);    // น้ำเงินดับ
  delay(2000); // รอ 1 วินาที

  // แสดงสีน้ำเงิน
  analogWrite(11, 0);   // แดงดับ
  analogWrite(10, 0);   // เขียวดับ
  analogWrite(9, 255);  // น้ำเงินสว่างสุด
  delay(2000); // รอ 1 วินาที
}