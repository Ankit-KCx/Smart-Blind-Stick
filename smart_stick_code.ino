const int trigPin=9;
const int echoPin=10;
const int buzzer=11;
const int ledPin=13;
long duration ;
int distance ,safetyDistance;

void setup() {
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(2);
digitalWrite(trigPin,LOW);
duration = pulseIn(echoPin,HIGH);
safetyDistance = distance;

if(safetyDistance <=5)
{
  digitalWrite(buzzer,HIGH);
  digitalWrite(ledPin,HIGH);
}

else{
  digitalWrite(buzzer,LOW);
  digitalWrite(ledPin,LOW);
  
}
Serial .print("Distance:  ");
Serial .println(distance);

}
