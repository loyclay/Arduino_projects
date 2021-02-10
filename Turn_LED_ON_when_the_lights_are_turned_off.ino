int bluePin = 13;
int buzzPin = 8;
int lightPin = A0;
int lightval;
int dt1 = 5;
int dt2 = 1;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(bluePin, OUTPUT);
pinMode(buzzPin, OUTPUT);
pinMode(lightPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
lightval = analogRead(lightPin);

Serial.println(lightval);

if (lightval > 500){
  digitalWrite(bluePin, HIGH);
  digitalWrite(buzzPin, HIGH);
  delay(dt1);
  digitalWrite(buzzPin, LOW);
  delay(dt2);
  
  }
if (lightval < 500){
  digitalWrite(bluePin, LOW);
  digitalWrite(buzzPin, LOW);
  delay(dt1);
  
  }
}
