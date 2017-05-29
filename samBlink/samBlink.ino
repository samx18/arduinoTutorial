/*
Sam's first program and it's as awesome as Sam :)
*/

int ledPin = 13;

void setup(){

  // initialize pin as outputs
  pinMode(ledPin, OUTPUT);
}

void loop(){
  // Turn on led
  digitalWrite(ledPin, HIGH);
  // Wait for 500 milisecond
  delay(5000);
  // Turn off led 
  digitalWrite(ledPin, LOW);
  // Wait for 500 millisecond
  delay(5000);
  // loopback

}
