void setup() {
  pinMode(13, OUTPUT); //Dioda jako wyjście
  pinMode(12, OUTPUT); //Dioda jako wyjście
  pinMode(11, OUTPUT); //Dioda jako wyjście
  pinMode(7, INPUT_PULLUP); //Przycisk jako wejście-red
  pinMode(6, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  

}

void offLed(){
  digitalWrite(13, LOW); //red
  digitalWrite(12, LOW); //green
  digitalWrite(11, LOW); //blue
}

void loop() {
  int valueOfColour = 0;
  while (digitalRead(7) == LOW) { //Jeśli przycisk jest wciśnięty 
    if (valueOfColour < 3)
    {
    valueOfColour++;
    }
    else
    {
      valueOfColour = 0;
    }
    offLed();
    if (valueOfColour == 1){
    digitalWrite(13, HIGH);
    }
    else if (valueOfColour == 2){  
      digitalWrite(12, HIGH);
    }
    else if (valueOfColour == 3){
      digitalWrite(11, HIGH);
    }
  }
  
}
