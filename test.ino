#include <Servo.h>
#include <Keypad.h>
const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};
byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the keypad
char mdp[4] = {0, 0, 0, 0}; //connect to the column pinouts of the keypad
String pwd = "1234";
int counter = 0;
String userPWD = "";
Servo myservo;  
digitalWrite(ledr=2)
int pos = 0;    

const int mqxPin = A0;  
pinMode(ledr, OUTPUT);
void gaz;     
{

    if(analogRead(mqxPin) > 120){
     digitalWrite(ledr, HIGH); 
        delay(1000);         
    }
    else{
      digitalWrite; (ledr, LOW);  
      }
  
    Serial.println(analogRead(mqxPin));
    delay(1000);       
}
