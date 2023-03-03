int motorPin = 3;

void setup()
{
    pinMode(motorPin, OUTPUT);
    // Moviment inicial
    for (int i=1;i<10;i++){
      int dutyCycle = 50; // Valor entre 0 y 255
      analogWrite(motorPin, dutyCycle); // Enviem senyal PWM al motor
      delay(100); // 
    }
}

void loop()
{
  // Inici

    //Si posem molt temps d'espera, el ratolí no es mou.
    // Primer enviem un moviment i esperem 300 ms, enviem moviment i fem la pausa mes llarga.
    
    //Despertem ratolí 
    int dutyCycle = 30; // Valor entre 0 y 255. Valors petits amb poc temps no mouen el motor
    analogWrite(motorPin, dutyCycle); // Enviem senyal PWM al motor
    delay(40); // Esperamos abans de parar el motor 
    dutyCycle = 0; // Valor entre 0 y 255
    analogWrite(motorPin, dutyCycle); // Enviem senyal PWM al motor
    // Esperem 500ms
    delay(300);
    // Fi despertem ratoli

    // Enviem moviment
    dutyCycle = 30; // Valor entre 0 y 255. Valors petits amb poc temps no mouen el motor
    analogWrite(motorPin, dutyCycle); // Enviem senyal PWM al motor
    delay(50); // Esperamos abans de parar el motor 
    dutyCycle = 0; // Valor entre 0 y 255
    analogWrite(motorPin, dutyCycle); // Enviem senyal PWM al motor
    delay(150000); // Esperem 150 segons
}
