int notas[11];
int bpm=100;
int pin=5;

int a=0;
int as=1;
int bb= 1;
int b=2;
int c=3;
int cs=4;
int db=4;
int d=5;
int ds=6;
int eb=6
int e=7;
int f=8;
int fs=9;
int gb=9; 
int g=10;
int gs=11;

void play(int note, float figure, float octave=1){
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
}
