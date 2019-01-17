int pin = 6;


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  if (Serial.available()>0) {
    
    char serIn = Serial.read();
    
    if(serIn=='A') {
      digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(1000);                       // wait for a second
    
    
    }
     if(serIn=='B') {
      digitalWrite(pin, LOW);    // turn the LED off by making the voltage LOW
      delay(1000);  
    
    }
    
    
  }
                    
}
