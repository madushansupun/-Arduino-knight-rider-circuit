void setup() {
 for(int pin=3 pin<14; pin++){
  pinMode(pin,OUTPUT);


 }

}

void loop() {

  int b = 30;
-------------------------> Right
  for(int i=2; i<14; i++){
     digitalWrite(i, HIGH);
     delay(b);
     digitalWrite(i+1, HIGH);
     delay(b);
     digitalWrite(i+2, HIGH);
     delay(b);
     digitalWrite(i,LOW);
     delay(b);
     digitalWrite(i+1, LOW);

}
<------------------------- Left
for(int i=13; i>1; i--){
digitalWrite(i, HIGH);
     delay(b);
     digitalWrite(i-1, HIGH);
     delay(b);
     digitalWrite(i-2, HIGH);
     delay(b);
     digitalWrite(i,LOW);
     delay(b);
     digitalWrite(i-1, LOW);

}

}
