/*
Simple led operation
*/

int switchPin = 8;
int ledPin = 13;

void setup(){
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop(){
  
  if (digitalRead(switchPin) == HIGH){
    
    // if switch is presed, turn on the LED
    
    digitalWrite(ledPin, HIGH);
    
  }
  else{
    
    // else keep the LED off
    
    digitalWrite(ledPin, LOW);
    
  }
}
