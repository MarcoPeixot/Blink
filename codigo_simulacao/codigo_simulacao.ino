// Código para piscar o LED interno do Arduino UNO
void setup() {
  // Define o pino 13 como saída
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Liga o LED
  delay(1000);                       // Aguarda 1 segundo
  digitalWrite(LED_BUILTIN, LOW);    // Desliga o LED
  delay(1000);                       // Aguarda 1 segundo
}