// C++ code
 
int triggerpin = 7;
int echopin = 6;
 long duration;
 int distance;
void setup()
{
 pinMode(triggerpin,OUTPUT);
 pinMode(echopin,INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(triggerpin,LOW);
  delay(2000);
  digitalWrite(triggerpin,HIGH);
  delay(1000);
  digitalWrite(echopin,LOW);
  delay(2000);
  digitalWrite(echopin,HIGH);
  delay(1000);
  duration = pulseIn(echopin,HIGH);
  distance = duration*0.034/2;
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.print("cm");
}

//{
  //delay(10); // Delay a little bit to improve simulation performance
//}