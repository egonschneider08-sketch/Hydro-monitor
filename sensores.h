#include "Projeto.h"

void setupSensores() {
  // Pinos analógicos não precisam de pinMode no setup
}

void lerSensores() {
  int leitura = analogRead(potPin);
  nivel = map(leitura, 0, 1023, 0, 100);

  if (nivel > nivelAnterior) {
    consumo += (nivel - nivelAnterior) * 100;
  }
  nivelAnterior = nivel;
}
