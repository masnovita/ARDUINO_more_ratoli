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

    int dutyCycle = 30; // Valor entre 0 y 255. Valors petits amb poc temps no mouen el motor
    analogWrite(motorPin, dutyCycle); // Enviem senyal PWM al motor
    delay(50); // Esperamos abans de parar el motor 
    dutyCycle = 0; // Valor entre 0 y 255
    analogWrite(motorPin, dutyCycle); // Enviem senyal PWM al motor
    delay(20000); // Esperem 20 segons
}
