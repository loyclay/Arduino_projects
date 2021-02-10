
int buzzPin = 8;
int dt1 = 5;
int dt2 = 1 ;
int ptPin = A0;
int potval ;
int toneval;

void setup() {
  // put your setup code here, to run once:
pinMode(buzzPin, OUTPUT);
pinMode(ptPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

potval = analogRead(ptPin);
toneval = (9940./1023.) * potval + 60; // between 60 and 10000

digitalWrite(buzzPin, HIGH);
delayMicroseconds(toneval);
digitalWrite(buzzPin, LOW);
delayMicroseconds(toneval);
}
