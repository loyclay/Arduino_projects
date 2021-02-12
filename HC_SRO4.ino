int trigPin=3;
int echoPin=2;
int pingTravelTime;

void setup() {
  // put your setup code here, to run once:
pinMode(echoPin, INPUT);
pinMode(trigPin, OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, LOW);
delayMicroseconds(10);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
pingTravelTime = pulseIn(echoPin, HIGH);
//pingTravelTime = digitalRead(echoPin);
Serial.println(pingTravelTime);
delay(500);
}
