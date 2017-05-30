int switchPin = 8;
int ledPin = 13;
boolean lastButton = LOW;
boolean currentButton = LOW;
boolean ledOn = false;

void setup(){
 
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
}

// Introduce a custom function to handle switch contact bouncing 
boolean debounce(boolean last)
{
 boolean current = digitalRead(switchPin);
 if (last != current)
 {
   delay(5);
   current = digitalRead(switchPin);
 }
 return current;
  
}


void loop(){

  currentButton = debounce(lastButton);
  
  if (lastButton == LOW && currentButton == HIGH)
  {
    //Flip to reverse value
    ledOn = !ledOn;
  }

  lastButton = currentButton;
  digitalWrite(ledPin, ledOn);

}

