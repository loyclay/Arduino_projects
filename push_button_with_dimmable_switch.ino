int LEDPin = 13;
int button1Pin = 8;
int button2Pin = 9;
int buzzerPin = 2;
int button1Val;
int button2Val;
int LEDBright=0;
int dt = 100;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(button1Pin, INPUT);
pinMode(button2Pin, INPUT);
pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
button1Val = digitalRead(button1Pin);
button2Val = digitalRead(button2Pin);
//Serial.print("Button 1 = ");
//Serial.print(button1Val);
//Serial.print(",");
//Serial.print("Button 2 = ");
//Serial.println(button2Val);
//delay(250);
if (button1Val ==0){
  LEDBright = LEDBright + 5;
 
  Serial.println("LEDBright = ");
  Serial.print(LEDBright);
  }
if (button2Val == 0){
  LEDBright = LEDBright - 5;
  
  Serial.println("LEDBright = ");
  Serial.print(LEDBright);

  } 
if (LEDBright >= 255){
  LEDBright = 255;
  Serial.println("LEDBright = ");
  Serial.print(LEDBright);

  digitalWrite(buzzerPin, HIGH);
  delay(dt);
  digitalWrite(buzzerPin, LOW);
  delay(dt);
  }
if (LEDBright <= 0){
  LEDBright = 0;
  digitalWrite(buzzerPin, HIGH);
  delay(dt);
  digitalWrite(buzzerPin, LOW);
  delay(dt);
  }
analogWrite(LEDPin, LEDBright);
  

}
