#  Smart Parking System with Arduino Uno

![Arduino](https://img.shields.io/badge/Arduino-Uno-blue?logo=arduino&logoColor=white)
![Status](https://img.shields.io/badge/Status-Completed-success?style=flat-square)

## 📌 Deskripsi
Smart Parking System adalah proyek berbasis **Arduino Uno** yang mensimulasikan sistem parkir otomatis menggunakan **sensor ultrasonik** dan **servo motor**.  
Sistem akan mendeteksi kendaraan di depan palang dan mengatur servo secara otomatis untuk membuka atau menutup palang parkir.  

Proyek ini merepresentasikan konsep **parkir modern** yang banyak digunakan di mall, gedung perkantoran, dan area parkir otomatis.

---

## ⚙️ Komponen
- Arduino Uno  
- Servo Motor (SG90 / MG996R)  
- Ultrasonic Sensor HC-SR04  
- Breadboard + Kabel Jumper  
- Power Supply (dari Arduino/USB)  

---

## Wiring Komponen
```
[Ultrasonic]
 VCC → 5V
 GND → GND
 Trig → 9
 Echo → 8

[Servo]
 VCC → 5V
 GND → GND
 Signal → 6

[LCD I2C]
 VCC → 5V
 GND → GND
 SDA → A4
 SCL → A5

[LED Hijau]
 Anoda → 4 (dengan resistor)
 Katoda → GND

[LED Merah]
 Anoda → 5 (dengan resistor)
 Katoda → GND

```

<img src="../7.SMART PARKING SYSTEM/wiring-img.png">

## Kesimpulan

Proyek ini berhasil mensimulasikan sistem parkir otomatis menggunakan Arduino Uno.
Potensi pengembangan lebih lanjut:

- Tambah LCD untuk menampilkan jumlah slot parkir.
- Gunakan RFID/NFC untuk akses pengguna.
- Integrasi IoT (ESP32/WiFi) untuk monitoring via aplikasi/web.