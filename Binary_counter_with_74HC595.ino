int latchPin = 11;
int clockPin = 9;
int dataPin =12;

//byte LEDs = 0xFF; // turns all the LEDs ON 1111, 1111
int dt = 100;

byte LEDs = 0b00000000;
byte LEDs2 = 0b01010101;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(latchPin, OUTPUT);
pinMode(dataPin, OUTPUT);
pinMode(clockPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(latchPin, LOW);
shiftOut(dataPin, clockPin, LSBFIRST, LEDs);
digitalWrite(latchPin, HIGH);
delay(dt);

Serial.println(LEDs, BIN);
LEDs = LEDs + 1;

}
