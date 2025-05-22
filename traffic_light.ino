// กำหนดขาสำหรับแต่ละสีของ LED
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  // กำหนดให้ขาเป็นเอาต์พุต
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // กำหนดสีที่ต้องการ (ค่า 0-255)
  setColor(255, 0, 0); // สีแดง (Red)
  delay(1000);

  setColor(0, 255, 0); // สีเขียว (Green)
  delay(1000);

  setColor(0, 0, 255); // สีน้ำเงิน (Blue)
  delay(1000);

  setColor(255, 255, 0); // สีเหลือง (Yellow = Red + Green)
  delay(1000);

  setColor(255, 0, 255); // สีม่วง (Magenta = Red + Blue)
  delay(1000);

  setColor(0, 255, 255); // สีฟ้า (Cyan = Green + Blue)
  delay(1000);

  setColor(255, 255, 255); // สีขาว (White = Red + Green + Blue)
  delay(1000);

  setColor(0, 0, 0);     // ปิดไฟ (Off)
  delay(1000);
}

// ฟังก์ชันสำหรับกำหนดสีของ LED
void setColor(int redValue, int greenValue, int blueValue) {
  // สำหรับ Common Cathode: ส่งค่า LOW เพื่อให้ LED สว่าง
  analogWrite(redPin, 255 - redValue);
  analogWrite(greenPin, 255 - greenValue);
  analogWrite(bluePin, 255 - blueValue);

  // สำหรับ Common Anode: ส่งค่า HIGH เพื่อให้ LED สว่าง (Uncomment บรรทัดด้านล่าง)
  // analogWrite(redPin, redValue);
  // analogWrite(greenPin, greenValue);
  // analogWrite(bluePin, blueValue);
}