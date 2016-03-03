void setup() {
  // haut=courant bas=pas de courant
  pinMode(3, OUTPUT); // verte de Desplechin
  pinMode(4, OUTPUT); //rouge de colère
  pinMode(5, OUTPUT); //rouge de colère
  pinMode(2, INPUT);  // bouton d'acné
  }

void loop() {
  int bouton = 0;
  bouton = digitalRead(2);
  
  if (bouton == LOW) {
     digitalWrite (3, HIGH);
     digitalWrite  (4, LOW);
     digitalWrite (5, LOW);
    
  } else {
    digitalWrite (3, LOW);
    digitalWrite (4, HIGH);
    digitalWrite (5, LOW);

    delay (250);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250);
  }
}
