int lightPin = A0;
int  lightVal;
int dt = 250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lightPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
lightVal = analogRead(lightPin);
Serial.println(lightVal);
delay(dt);
}
