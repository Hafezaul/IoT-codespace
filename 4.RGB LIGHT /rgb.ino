// variabel interger
int red = 9; // int pin 9
int green = 10; // int pin 10
int blue = 11; // int pin 11


void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(red, 225);// konfigurasi led merah
  analogWrite(green, 0);
  analogWrite(blue, 0);
  delay(100); // jarak kedip antar lampu 
  analogWrite(red, 0);
  analogWrite(green, 225);// konfigurasi led hijau
  analogWrite(blue, 0);
  delay(100); // jarak kedip antar lampu 
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 225);// konfigurasi led biru
  delay(100); // jarak kedip antar lampu 
  
}

