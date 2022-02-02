//Exemplo 02
//Acende e apaga o led e envia mensagem no monitor serial

const int ledPin = 5;

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200);
}

void loop(){
  Serial.println("Hello world!");
  digitalWrite(ledPin, HIGH);
  delay(1000); // Tempo em ms
  digitalWrite(ledPin, LOW);
  delay(1000);
}
