#include "dBuzzer.h"

void setup() {
  Serial.begin(9600);
  buzzer();
  play(d,1);
  play(g,0.5,0.5);
  play(a,0.5);
  play(b,0.5);
  play(c,0.5);
  play(d,1);
  play(g,1,0.5);
  play(g,1,0.5);
}

void loop() {
  // put your main code here, to run repeatedly:

}
