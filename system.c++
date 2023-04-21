// Definição dos pinos dos LEDs dos semáforos
const int LEDRed1 = 0;
const int LEDYellow1 = 1;
const int LEDGreen1 = 2;
const int LEDRed2 = 5;
const int LEDYellow2 = 6;
const int LEDGreen2 = 7;

void setup() {
  // Configuração dos pinos como saída
  pinMode(LEDRed1, OUTPUT);
  pinMode(LEDYellow1, OUTPUT);
  pinMode(LEDGreen1, OUTPUT);
  pinMode(LEDRed2, OUTPUT);
  pinMode(LEDYellow2, OUTPUT);
  pinMode(LEDGreen2, OUTPUT);
}

void loop() {
  // Estágio 1: semáforo 1 verde e semáforo 2 vermelho
  digitalWrite(LEDGreen1, HIGH);
  digitalWrite(LEDYellow1, LOW);
  digitalWrite(LEDRed1, LOW);
  digitalWrite(LEDGreen2, LOW);
  digitalWrite(LEDYellow2, LOW);
  digitalWrite(LEDRed2, HIGH);
  delay(5000); // tempo em milissegundos (ms)

  // Estágio 2: semáforo 1 amarelo e semáforo 2 vermelho
  digitalWrite(LEDGreen1, LOW);
  digitalWrite(LEDYellow1, HIGH);
  digitalWrite(LEDRed1, LOW);
  digitalWrite(LEDGreen2, LOW);
  digitalWrite(LEDYellow2, LOW);
  digitalWrite(LEDRed2, HIGH);
  delay(2000);

  // Estágio 3: semáforo 1 vermelho e semáforo 2 verde
  digitalWrite(LEDGreen1, LOW);
  digitalWrite(LEDYellow1, LOW);
  digitalWrite(LEDRed1, HIGH);
  digitalWrite(LEDGreen2, HIGH);
  digitalWrite(LEDYellow2, LOW);
  digitalWrite(LEDRed2, LOW);
  delay(5000);

  // Estágio 4: semáforo 1 vermelho e semáforo 2 amarelo
  digitalWrite(LEDGreen1, LOW);
  digitalWrite(LEDYellow1, LOW);
  digitalWrite(LEDRed1, HIGH);
  digitalWrite(LEDGreen2, LOW);
  digitalWrite(LEDYellow2, HIGH);
  digitalWrite(LEDRed2, LOW);
  delay(2000);
}
