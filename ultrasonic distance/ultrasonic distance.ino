#define trig 9
#define echo 8


void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(115200);

}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  float duration= pulseIn(echo,HIGH);

  float distance=(0.0343*duration)/2;

  Serial.println(distance);


}
