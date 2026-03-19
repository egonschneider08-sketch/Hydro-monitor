#include "Projeto.h"

void setupMemoria() {
  EEPROM.get(enderecoEEPROM, consumo);

  if (consumo > 1000000000) {
    consumo = 0;
  }
  consumoSalvo = consumo; // Garante que a primeira verificação no loop faça sentido
}

void gerenciarMemoria() {
  if (millis() - tempoEEPROM > 5000) {
    if (consumo != consumoSalvo) {
      EEPROM.put(enderecoEEPROM, consumo);
      consumoSalvo = consumo;
    }
    tempoEEPROM = millis();
  }
}
