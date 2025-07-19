int ledm = 8;
int ledk = 9;
int ledh = 10;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledm, OUTPUT);
  pinMode(ledk, OUTPUT);
  pinMode(ledh, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledm, HIGH);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, LOW);
    Serial.println("Merah menyala");
delay(1000);
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, HIGH);
  digitalWrite(ledh, LOW);
    Serial.println("Kuning menyala");
delay(1000);
    Serial.println("Hijau menyala");
  digitalWrite(ledm, LOW);
  digitalWrite(ledk, LOW);
  digitalWrite(ledh, HIGH);
delay(1000);
}
