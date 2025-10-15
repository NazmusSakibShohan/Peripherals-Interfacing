void setup() {

pinMode(7, OUTPUT);//red
pinMode(6, OUTPUT);//yellow
pinMode(5, OUTPUT);//green


}

void loop() {
  //red
digitalWrite(7, HIGH);
digitalWrite(6,LOW);
digitalWrite(5, LOW);
delay(2000);

//yellow
digitalWrite(6, HIGH);
digitalWrite(7,LOW);
digitalWrite(5, LOW);
delay(2000);

//green
digitalWrite(5, HIGH);
digitalWrite(6,LOW);
digitalWrite(7, LOW);
delay(2000);

//yellow
digitalWrite(6, HIGH);
digitalWrite(7,LOW);
digitalWrite(5, LOW);
delay(2000);

}
