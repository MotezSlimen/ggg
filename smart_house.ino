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

int pos = 0;    

const int mqxPin = A0;  

void setup()
{
   Serial.begin(9600);
   myservo.attach(9);  
}
       


void bluetooth(int i)

{
Serial.println(i);
    if(i == 'o')  
  for (pos = 0; pos <= 180; pos += 1) { 
    myservo.write(pos);             
    delay(15); 
  }       
    if(i == 'c')
    
    for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);             
    delay(15);  
  }
}



void gaz);     
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
void keypad()
void processLogin() {
  char key = keypad.getKey();
  while (key != '#') {
    Serial.println(key);
    userPWD += key;
    key = keypad.getKey();
  }
}

bool verifLogin() {
  return userPWD.equals(pwd);
}
void loop() {
  char key = keypad.getKey();
      Serial.println(key);

  if (key == '*') {
    processLogin();
    bool isCorrect = verifLogin();
    String msg = isCorrect ? "PWD OK !" : "PWD NOT OK, try again";
        Serial.println("moh");

    Serial.println(msg);
    userPWD = "";
    delay(1000);
  }
}
if(counter==4)
  {
  Serial.print(mdp[0]);
  Serial.print(mdp[1]);
  Serial.print(mdp[2]);
  Serial.print(mdp[3]);
  if(mdp[0]=='4' && mdp[1]=='4' && mdp[2]=='4' && mdp[3]== '4')
       Serial.print("correct");
  else
  Serial.print("Incorrect");
  counter=0;
  Serial.println();
  }
  if (key){
  Serial.print(key);
  mdp[counter]=key;
  counter++;
  }
