int buttonPin = 8;
int buttonvalue;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buttonPin, INPUT);
digitalWrite(buttonPin, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonvalue = digitalRead(buttonPin);
Serial.println(buttonvalue);
}
