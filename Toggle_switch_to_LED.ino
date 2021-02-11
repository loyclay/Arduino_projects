int buttonNew;
int buttonPin = 8;
int LEDPin = 13;
int LEDState = 0;

int buttonOld = 1;
int dt = 100;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonNew = digitalRead(buttonPin);
Serial.println(buttonNew);

if (buttonNew == 1 && buttonOld ==0){
  if (LEDState ==0){
    digitalWrite(LEDPin, HIGH);
    LEDState = 1;
  }
 //if(buttonRead == 0 && buttonOld ==1 )
else {
  digitalWrite(LEDPin, LOW);
  LEDState == 0;
 
 }
 
 }
 buttonOld = buttonNew;
delay(dt);
}
