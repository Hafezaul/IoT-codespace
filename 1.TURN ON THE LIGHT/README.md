<h1 align="center">Menyalakan Lampu</h1>

###

<p align="left">Tingkat kesulitan : Mudah</p>

###

<h3 align="left">Penjelasan Kode</h3>

###

<div align="center">
  <img height="200" src="../1.TURN ON THE LIGHT/ilustrasi.png"  />
</div>

###
<p align="center">Ilustrasi</p>

###

```
int ledm = 8;   // LED merah
int ledk = 9;   // LED kuning
int ledh = 10;  // LED hijau

void setup() {
  Serial.begin(9600);         // Mulai komunikasi serial (untuk debugging di Serial Monitor)
  pinMode(ledm, OUTPUT);      // Set pin 8 sebagai output
  pinMode(ledk, OUTPUT);      // Set pin 9 sebagai output
  pinMode(ledh, OUTPUT);      // Set pin 10 sebagai output
}

void loop() {
  // Nyalakan LED merah, matikan lainnya
  digitalWrite(ledm, HIGH);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, LOW);
  Serial.println("Merah menyala");
  delay(1000); // tunggu 1 detik

  // Nyalakan LED kuning, matikan lainnya
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, HIGH);
  digitalWrite(ledh, LOW);
  Serial.println("Kuning menyala");
  delay(1000); // tunggu 1 detik

  // Nyalakan LED hijau, matikan lainnya
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, HIGH);
  Serial.println("Hijau menyala");
  delay(1000); // tunggu 1 detik
}
```

### Cara Kerja Program

Secara keseluruhan, program ini:

1. Menyalakan LED merah selama 1 detik → tampilkan "Merah menyala" di serial monitor
2. Menyalakan LED kuning selama 1 detik → tampilkan "Kuning menyala"
3. Menyalakan LED hijau selama 1 detik → tampilkan "Hijau menyala"
4. Ulangi terus-menerus

### Coba Demo Proyek Ini 

[🔌 Klik untuk Simulasi di Wokwi](https://wokwi.com/projects/418127986005632001)
