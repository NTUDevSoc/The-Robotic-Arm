#include "Servo.h"
const int shoulder_treshold = 50;
Servo base;
Servo shoulder;
Servo elbow;
Servo wrist;

int _base = 90;
int _shoulder = 90 + shoulder_treshold;
int _elbow = 90;
int _wrist = 90;

void increment(int& val)
{
    val++;
   // Serial.println("Incrementing");
}

void decrement(int& val)
{
    val--;
  //  Serial.println("Decrementing");
}

void setup()
{
    base.attach(3); //a
    shoulder.attach(5); //b
    elbow.attach(6);
    wrist.attach(10);
    wrist.attach(9);
    /*
for(int i = 0; i<120;i++){
      base.write(i);
      shoulder.write(i);
      elbow.write(i);
      wrist.write(i);
      wrist.write(i);
      delay(50);
      
      }
      */

    base.write(90);
    shoulder.write(90 + shoulder_treshold);
    Serial.begin(115200);
    //wait for the serial to connect
    while (!Serial.available())
        ;
    //slow start of the motors,turn on procedure
}

void loop()
{
    // put your main code here, to run repeatedly:
    while (Serial.available()) {
        char c = Serial.read();

        switch (c) {
        case 'A': {
            if (_base < 180)
                increment(_base);
            base.write(_base);

            break;
        }

        case 'a': {
            //decrement a
            if (_base >= 0)
                decrement(_base);
            base.write(_base);
            break;
        }

        case 'B': {
            if (_shoulder < 180)
                increment(_shoulder);
            shoulder.write(_shoulder);

            break;
        }
        case 'b': {
            if (_shoulder >= shoulder_treshold)
                decrement(_shoulder);
            shoulder.write(_shoulder);

            break;
        }

        case 'C': {
            if (_elbow < 180)
                increment(_elbow);
            elbow.write(_elbow);
            break;
        }
        case 'c': {
            if (_elbow >= 0)
                decrement(_elbow);
            elbow.write(_elbow);
            break;
        }
        case 'D': {
            if (_elbow < 180)
                increment(_wrist);
            wrist.write(_wrist);
            break;
        }

        case 'd': {
            if (_wrist >= 0)
                decrement(_wrist);
            wrist.write(_wrist);
            break;
        }

        case 'E': {
            //increment e
            break;
        }
        case 'e': {
            //decrement e
            break;
        }

        default: {
            break;
        }
        
        }
        //delay(20);
    }
}
