// Declare variables
char serialData;

int trigPin = 11;
int echoPin = 10;
long duration, cm;


void setup(){
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600);
Serial.setTimeout(80);

}
void loop()
{
    // The sensor is triggered by a high pulse of 10 or more microseconds
    // Give a low short pulse beforehand to ensure a clean HIGH pulse
    digitalwrite(trigPin, LOW);
    delayMicroseconds(5);
    digitalwrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalwrite(trigPin, LOW);
    // Read signal from the sensor, a HIGH pulse whose duration is the time in microseconds
    // from sending the ping to the reception of the echo off of an object
    pinMode(echoPin, INPUT);
    duration = pulseIn(echoPin, HIGH);
    cm = (duration/2)/29.1 // divide by 29.1 or * 0.0343
    Serial.println(cm); // sent to python for displaying graph
    delay(500);

}