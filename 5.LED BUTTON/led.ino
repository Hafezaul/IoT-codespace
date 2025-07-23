int ledb = 12; // LED ungu
int ledm = 13; // LED hijau

int btnh = 10; // Tombol hijau
int btnb = 11; // Tombol ungu

int btnstateb = 0; // Status tombol bawah
int btnstateh = 0; // Status tombol atas

void setup() {
  // Konfigurasi pin sebagai OUTPUT atau INPUT
  pinMode(ledb, OUTPUT);
  pinMode(ledm, OUTPUT);
  pinMode(btnb, INPUT);
  pinMode(btnh, INPUT);
}

void loop() {
  // Membaca status tombol
  btnstateb = digitalRead(btnb);
  btnstateh = digitalRead(btnh);
          // kondisi untuk tombol biru
  if (btnstateb == HIGH) {
    digitalWrite(ledb, HIGH);
  } else {
    digitalWrite(ledb, LOW);
  }
          // kondisi untuk tombol hijau
  if (btnstateh == HIGH) {
    digitalWrite(ledm, HIGH);
  } else {
    digitalWrite(ledm, LOW);
  }
}
