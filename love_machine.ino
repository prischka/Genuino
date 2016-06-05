const int pinCapteur = A0; // Pin sert à capter si la  personne est chaude.
float temperatureDeBase = 22.7; //température de la pièce


float chaud() {
  int valeur = analogRead(pinCapteur);

  float voltage = (valeur/1024.0) * 5;
  float temperature = (voltage-0.5) * 100; 
  
  return temperature;
}

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);

  temperatureDeBase = chaud();
}



void loop() {
  float temperature = chaud() - temperatureDeBase;

  if (temperature < 2) {
    
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
  
  }else if (temperature < 4) {
    
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
 
  } else if (temperature < 5) {

    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);

  } else {
    
    digitalWrite(2, HIGH);
    digitalWrite(3,HIGH );
    digitalWrite(4, HIGH);
  
  }
  delay (1);
}
