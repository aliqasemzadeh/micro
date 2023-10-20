const int MT_F = 12;
const int MT_R = 13;
int type = 0;

void setup(){
    pinMode( MT_F, OUTPUT );
    pinMode( MT_R, OUTPUT );

    pinMode( 2, INPUT );
}

void loop(){
  type = digitalRead(2);
  if(type) {
      digitalWrite( MT_F, HIGH );
      digitalWrite( MT_R, LOW );
  } else {
      digitalWrite( MT_F, LOW );
      digitalWrite( MT_R, HIGH );
  }
  delay(500);
}