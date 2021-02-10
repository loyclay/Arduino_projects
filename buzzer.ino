int myNumb;
int potPin=A0;
int buzzPin = 13;
int readval;
int P2;
//String msg = "Enter your number: ";
int dt = 5000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
pinMode(potPin, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

readval = analogRead(potPin);

P2 = (5./1023.) * readval;

Serial.println(readval); Serial.println (P2);

  
myNumb = Serial.parseInt();
while (readval < 1000){
    digitalWrite(buzzPin, HIGH);
    
    readval = analogRead(potPin);
   
   
    }
 digitalWrite(buzzPin, LOW);
}
