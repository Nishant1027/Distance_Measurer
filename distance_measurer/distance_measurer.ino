const int trigPin=2;
const int echoPin=0;


long duration;
int distance;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
Serial.begin(9600);
//pinMode(r1,INPUT);
//pinMode(Status,OUTPUT);

}

void loop() {
  // put your main code here, to run repii
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delay(10);
  digitalWrite(trigPin,LOW);

  duration=pulseIn(echoPin,HIGH);
  distance=(duration*0.034)/2;
  Serial.print("Distacnce:  ");
  Serial.println(distance);
  delay(2000);
}
