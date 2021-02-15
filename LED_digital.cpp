
// declare variable
char serialData;
int LEDpin = 13;

// setup your baudrate and arduino pins
void setup(){
    pinMode(LEDpin, OUTPUT);
    Serial.begin(9600);
}
void loop(){
    if (serial.available() == 0){//send data only when you receive data from python
    serialData = Serial.read(); // read serial data and assign to variable
    Serial.print(serialData); //print to check your data
    //Condition statement
    if (serialData == "0"){
        digitalWrite(LEDpin, HIGH);


    }
    else{
        digitalWrite(LEDpin, LOW);

    }


    }
}