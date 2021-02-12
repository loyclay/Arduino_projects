int redLED = 8;
int greenLED = 9;
int blueLED = 10;
int redLED2 = 11;
int s_Delay = 750;
int l_Delay = 100;

void setup() {
  // put your setup code here, to run once:
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED, LOW);
digitalWrite(greenLED, LOW);
digitalWrite(blueLED, LOW);
digitalWrite(redLED2, LOW);
delay(s_Delay);

digitalWrite(redLED, LOW);
digitalWrite(greenLED, LOW);
digitalWrite(blueLED, LOW);
digitalWrite(redLED2, HIGH);
delay(s_Delay);

digitalWrite(redLED, LOW);
digitalWrite(greenLED, LOW);
digitalWrite(blueLED, HIGH);
digitalWrite(redLED2, LOW);
delay(s_Delay);

digitalWrite(redLED, LOW);
digitalWrite(greenLED, LOW);
digitalWrite(blueLED, HIGH);
digitalWrite(redLED2, HIGH);
delay(s_Delay);

digitalWrite(redLED, LOW);
digitalWrite(greenLED, HIGH);
digitalWrite(blueLED, LOW);
digitalWrite(redLED2, LOW);
delay(s_Delay);

digitalWrite(redLED, LOW);
digitalWrite(greenLED, HIGH);
digitalWrite(blueLED, LOW);
digitalWrite(redLED2, HIGH);
delay(s_Delay);

digitalWrite(redLED, LOW);
digitalWrite(greenLED, HIGH);
digitalWrite(blueLED, HIGH);
digitalWrite(redLED2, LOW);
delay(s_Delay);

digitalWrite(redLED, LOW);
digitalWrite(greenLED, HIGH);
digitalWrite(blueLED, HIGH);
digitalWrite(redLED2, HIGH);
delay(s_Delay);

digitalWrite(redLED, HIGH);
digitalWrite(greenLED, LOW);
digitalWrite(blueLED, LOW);
digitalWrite(redLED2, LOW);
delay(s_Delay);

digitalWrite(redLED, HIGH);
digitalWrite(greenLED, LOW);
digitalWrite(blueLED, LOW);
digitalWrite(redLED2, HIGH);
delay(s_Delay);

digitalWrite(redLED, HIGH);
digitalWrite(greenLED, LOW);
digitalWrite(blueLED, HIGH);
digitalWrite(redLED2, LOW);
delay(s_Delay);

digitalWrite(redLED, HIGH);
digitalWrite(greenLED, LOW);
digitalWrite(blueLED, HIGH);
digitalWrite(redLED2, HIGH);
delay(s_Delay);

digitalWrite(redLED, HIGH);
digitalWrite(greenLED, HIGH);
digitalWrite(blueLED, LOW);
digitalWrite(redLED2, LOW);
delay(s_Delay);

digitalWrite(redLED, HIGH);
digitalWrite(greenLED, HIGH);
digitalWrite(blueLED, LOW);
digitalWrite(redLED2, HIGH);
delay(s_Delay);

digitalWrite(redLED, HIGH);
digitalWrite(greenLED, HIGH);
digitalWrite(blueLED, HIGH);
digitalWrite(redLED2, LOW);
delay(s_Delay);

digitalWrite(redLED, HIGH);
digitalWrite(greenLED, HIGH);
digitalWrite(blueLED, HIGH);
digitalWrite(redLED2, HIGH);
delay(s_Delay);


}
