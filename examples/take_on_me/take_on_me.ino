#include "dBuzzer.h"

void setup() {
  Serial.begin(9600);
  buzzer();
  play(fs,0.5);
  play(fs,0.5);
  play(d,0.5);
  play(b,1);
  play(b,1);
  play(e,1);
  play(e,1);
  play(e,0.5);
  play(gs,0.5);
  play(gs,0.5);
  play(a,0.5,2);
  play(b,0.5,2);
}

void loop() {
  // put your main code here, to run repeatedly:

}
