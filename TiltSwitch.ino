int tiltPin = 2;
int tiltVal;
int greenLED = 8;
int redLED = 7;
int dt = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(tiltPin, INPUT);
pinMode(greenLED, OUTPUT);
pinMode(redLED, OUTPUT);
digitalWrite(tiltPin, HIGH);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
tiltVal = digitalRead(tiltPin);
Serial.println(tiltVal);
delay(dt);
if (tiltVal == 0){
  digitalWrite(greenLED, HIGH);
  digitalWrite(redLED, LOW);
  }
if (tiltVal == 1){
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, HIGH);
  }
}
