#include <Maqueen.h>
Maqueen bot;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
Adafruit_Microbit microbit;

void setup() {
  Serial.begin(9600);
  bot.begin();
}

void loop() {
  unsigned int rangeping = sonar.ping();
  unsigned long rangeinch = sonar.ping_in();
  unsigned long rangecm = sonar.ping_cm();
  unsigned long rangeping_median = sonar.ping_median(); //ค่าของข้อมูลที่อยู่ตรงกลางจากข้อมูลทั้งหมด

  Serial.print("Distance: ");
  Serial.print(rangeping);
  Serial.print(" ping \t");

  Serial.print("Distance: ");
  Serial.print(rangeping_median);
  Serial.print(" median \t");

  Serial.print("Distance: ");
  Serial.print(rangeinch);
  Serial.print(" inch \t");

  Serial.print("Distance: ");
  Serial.print(rangecm);
  Serial.println(" cm");
  delay(100);
}
