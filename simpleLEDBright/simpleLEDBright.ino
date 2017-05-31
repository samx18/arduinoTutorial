int switchPin = 8;
int ledPin = 11;
boolean lastButton = LOW;
boolean currentButton = LOW;

//variable to set led level between 0-255
int ledLevel = 0;

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
    // Increment ledLevel
    ledLevel = ledLevel + 51;
  }
  
  lastButton = currentButton;
  
  if (ledLevel > 255) ledLevel = 0;

  
  analogWrite(ledPin, ledLevel);

}

