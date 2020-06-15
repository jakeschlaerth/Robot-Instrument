//jake schlaerth
//robot instrument
//guitar prototype
//5 voice polyphony
//PORT C



int serialValue; // value for serial input
int started = 0; // flag set when serial data recieved



const int motor1 = 2;
const int motor2 = 3;
const int motor3 = 4;
const int motor4 = 5;
const int motor5 = 6;
const int motor6 = 7;
const int motor7 = 8;
const int motor8 = 9;
const int motor9 = 10; 
const int motor10 = 11;
const int motor11 = 12;
const int motor12 = 13;
const int speed1 = 100;
const int speed = 255;  // midi velocity value, 1 to 255


void setup() 
{ 
  Serial.begin(9600); // open the arduino serial port
  pinMode(motor1, OUTPUT);  // set each pin to write
  pinMode(motor2, OUTPUT);
  pinMode(motor3, OUTPUT);
  pinMode(motor4, OUTPUT);
  pinMode(motor5, OUTPUT);
  pinMode(motor6, OUTPUT);
  pinMode(motor7, OUTPUT);
  pinMode(motor8, OUTPUT);
  pinMode(motor9, OUTPUT);
  pinMode(motor10, OUTPUT);
  pinMode(motor11, OUTPUT);
  pinMode(motor12, OUTPUT);
} 

void loop() 
{ 
  if(Serial.available()) // check to see if there's serial data in the buffer
  {
    serialValue = Serial.read(); // read a byte of serial data
    started = 1; // set the started flag
  }

  if(started) 
    {
    int midiValue = (serialValue / 10) + 60;  // lowest midi value is middle C, 60
    int onOrOff = serialValue % 10;           // last digit of serialValue will be 0 for note off message, 1 for note on message
    analogWrite(midiValue, (onOrOff*speed));  // write speed value to desired pin
    }