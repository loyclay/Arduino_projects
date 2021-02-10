int redPin = 13;
int bluePin = 10;
int greenPin = 11;
int dt = 250;
String myColor;
String msg = "Enter the LED color: ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);


// wait for user input

while (Serial.available() ==0){ 
  
  }
  myColor = Serial.readString();
//  Serial.print(myColor);
if (myColor == "1"){
    
    Serial.println(myColor);
    digitalWrite(redPin, HIGH); // Turn only red LED
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, LOW);

    }
  if (myColor == 2){
    digitalWrite(redPin, LOW); // Turn only blue LED
    digitalWrite(bluePin, HIGH);
    digitalWrite(greenPin, LOW);
    }
   if (myColor == 3){
    digitalWrite(redPin, LOW); // Turn only green LED
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, HIGH);
    }
   if (myColor == 0){
    digitalWrite(redPin, LOW); // Turn off LED
    digitalWrite(bluePin, LOW);
    digitalWrite(greenPin, LOW);
    }
    
  
}
