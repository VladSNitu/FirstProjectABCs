void setup(){
setup2();
setup1();

}
void loop() {
loopMotorStop();
delay(400);
if(distance<=10){
  loopSensor();
}

}