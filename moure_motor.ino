int motorPin = 3;

void setup()
{
    pinMode(motorPin, OUTPUT);
        for (int i=1;i<10;i++){
    int dutyCycle = 50; // Valor entre 0 y 255
    analogWrite(motorPin, dutyCycle); // Enviem senyal PWM al motor
    delay(100); // 
    }
}

void loop()
{
  // Inici

    int dutyCycle = 38; // Valor entre 0 y 255
    analogWrite(motorPin, dutyCycle); // Enviem senyal PWM al motor
    delay(40); // Esperamos abans de parar el motor 
    dutyCycle = 0; // Valor entre 0 y 255
    analogWrite(motorPin, dutyCycle); // Enviem senyal PWM al motor
    delay(60000); // Esperem 1 minuts
}
