int val;
int red=11, green=10,blue=9, LED_rosu=3, LED_albastru=2, LED_Verde=4;
void setup1() {
  pinMode(A1, INPUT);
  Serial.begin(9600);
  pinMode(green,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(LED_rosu,OUTPUT);
  pinMode(LED_albastru, OUTPUT);
  pinMode(LED_Verde, OUTPUT);

}

void loopSensor() {
  int i, sum=0, sum1=0, sum2=0;
  digitalWrite(LED_Verde, LOW);
  digitalWrite(LED_albastru, LOW);
  digitalWrite(LED_rosu, LOW);
  delay(3000);
  for (i=0; i<=4; i++){
  colorSwitch(250,0,0);
  delay(300);
  val=analogRead(A1);
  Serial.println(val);
  sum+=val;
  }
  for (i=0; i<=4; i++){
  colorSwitch(0,250,0);
  delay(300);
  val=analogRead(A1);
  Serial.println(val);
  sum1+=val;
  }
  for (i=0; i<=4; i++){
  colorSwitch(0,0,250);
  delay(300);
  val=analogRead(A1);
  Serial.println(val);
  sum2+=val;
  }
  sum=sum/5;
  sum1=sum1/5;
  sum2=sum2/5;
delay(500);
  Serial.println("SUM: ");
  Serial.println(sum);
  delay(500);
  Serial.println("SUM1: ");
  Serial.println(sum1);
  delay(500);
  Serial.println("SUM2: ");
  Serial.println(sum2);
  delay(500);
  if(sum>sum1){
    if(sum>sum2){
    Serial.println("sum e mai mare");
    digitalWrite(LED_rosu, HIGH);
    }
    else{
    Serial.println("sum2 e mai mare");
    digitalWrite(LED_Verde, HIGH);}
  }
  else if (sum1>sum){
    if(sum1>sum2){
    Serial.println("sum1 e mai mare");
    digitalWrite(LED_albastru, HIGH);}
    else{
    Serial.println("sum2 e mai mare");
    digitalWrite(LED_Verde, HIGH);}
  }
  delay(3000);
  digitalWrite(LED_Verde, LOW);
  digitalWrite(LED_albastru, LOW);
  digitalWrite(LED_rosu, LOW);
  colorSwitch(0,0,0);



}
void colorSwitch(int redV, int blueV, int greenV){
  analogWrite(red, redV);
  analogWrite(blue, blueV);
  analogWrite(green, greenV);

}
