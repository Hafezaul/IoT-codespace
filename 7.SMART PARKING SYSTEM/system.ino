#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo gateServo;

// Sensor 1 (Masuk)
const int trigPin1 = 9;
const int echoPin1 = 8;

// Sensor 2 (Keluar)
const int trigPin2 = 11;
const int echoPin2 = 10;

const int servoPin = 6;
const int ledHijau = 4;
const int ledMerah = 5;

// Fungsi baca jarak dengan timeout kecil
int readDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 5000); // timeout 5 ms
  if (duration == 0) return 999; // jika tidak ada pantulan
  int distance = duration * 0.034 / 2;
  return distance;
}

void setup() {
  lcd.init();
  lcd.backlight();

  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);

  pinMode(ledHijau, OUTPUT);
  pinMode(ledMerah, OUTPUT);

  gateServo.attach(servoPin);
  gateServo.write(0); // posisi awal tertutup

  lcd.setCursor(0, 0);
  lcd.print("Smart Parking");
  lcd.setCursor(0, 1);
  lcd.print("System Ready!");
  delay(2000);
  lcd.clear();
}

void loop() {
  int distance1 = readDistance(trigPin1, echoPin1); // sensor masuk
  int distance2 = readDistance(trigPin2, echoPin2); // sensor keluar

  // Mobil masuk → buka palang
  if (distance1 < 15) {
    digitalWrite(ledHijau, HIGH);
    digitalWrite(ledMerah, LOW);
    gateServo.write(90);

    lcd.setCursor(0, 0);
    lcd.print("Car Detected   ");
    lcd.setCursor(0, 1);
    lcd.print("Gate: OPEN     ");
  }
  // Mobil keluar → tutup palang
  else if (distance2 < 15) {
    digitalWrite(ledHijau, LOW);
    digitalWrite(ledMerah, HIGH);
    gateServo.write(0);

    lcd.setCursor(0, 0);
    lcd.print("Car Passed     ");
    lcd.setCursor(0, 1);
    lcd.print("Gate: CLOSED   ");
  }
  // Tidak ada mobil
  else {
    digitalWrite(ledHijau, LOW);
    digitalWrite(ledMerah, HIGH);
    gateServo.write(0);

    lcd.setCursor(0, 0);
    lcd.print("No Car         ");
    lcd.setCursor(0, 1);
    lcd.print("Gate: CLOSED   ");
  }

  delay(100); // lebih responsif
}
