const int mqxPin = A0;  // La sortie analogique du détecteur MQx est reliée au Pin analogique A0 de l'Arduino

const int ledr =2;
void setup()
{
    Serial.begin(9600); 
     pinMode(ledr, OUTPUT); 
      
}

void loop()             
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
