int notas[11];
int bpm=100;
int pin=5;

void play(int note, float figure, int octave=1){
  float negra = 60000000/bpm;
  for(int i = 0; i <= ( figure*negra*octave )/( 2*notas[note] ); i++){
    digitalWrite(pin,HIGH);
    delayMicroseconds(notas[note]/octave);
    digitalWrite(pin,LOW);
    delayMicroseconds(notas[note]/octave);
  }
}


void buzzer() {
  pinMode(pin,OUTPUT);
  int a = 1000000/(440);
  
  notas[0] = a/2;
  for(int i=1; i<= 11; i++){
    notas[i] = notas[i-1]/1.06;
  }
  for(int i=0; i<=11; i++){
    Serial.println(notas[i]);
  }
}
