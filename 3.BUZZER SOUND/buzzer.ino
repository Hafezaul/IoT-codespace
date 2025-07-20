int melody[] = {329, 392, 440, 392, 329, 329, 392, 440, 392, 329}; // Nada awal lagu "Fix You"
int duration[] = {500, 500, 500, 500, 1000, 500, 500, 500, 500, 1000}; // Durasi setiap nada (ms)
int buzzerPin = 8; // Pin untuk buzzer

void setup() {
  pinMode(buzzerPin, OUTPUT); // Atur pin buzzer sebagai output
}

void loop()
// agar bisa mengulang melodi tanpa perlu di reset
 {
  for (int i = 0; i < 10; i++) {           // Loop untuk memainkan semua nada
    tone(buzzerPin, melody[i], duration[i]); // Mainkan nada sesuai durasi
    delay(duration[i] + 100);               // Jeda antara nada
  }
  delay(2000); // Tunggu 2 detik sebelum mengulangi melodi
}
