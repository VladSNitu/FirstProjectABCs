
int trigger=5, echo=6, distance;
void setup2() {
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loopMotorStop() {
  int val=0;
  digitalWrite(trigger, LOW);
  delayMicroseconds(3);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  val=pulseIn(echo, HIGH);
  distance = val * .034 / 2;
  if(distance<100 && distance>=1){
  Serial.println(distance);
  delay(100);
  }

}
