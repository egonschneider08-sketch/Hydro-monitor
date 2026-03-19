#include "Projeto.h"

void setupDisplay() {
  lcd.init();
  lcd.backlight();
}

void atualizarDisplay() {
  if (millis() - tempoAnterior > 2000) {
    tela++;
    if (tela > 1) tela = 0;
    lcd.clear();
    tempoAnterior = millis();
  }

  if (tela == 0) {
    lcd.setCursor(0, 0);
    lcd.print("Nivel: ");
    lcd.print(nivel);
    lcd.print("%");

    lcd.setCursor(0, 1);
    lcd.print("Bomba: ");
    lcd.print(bombaLigada ? "Ligado" : "Desligado");
  }

  if (tela == 1) {
    lcd.setCursor(0, 0);
    lcd.print("Consumo total:");

    lcd.setCursor(0, 1);
    lcd.print(consumo);
    lcd.print(" L");
  }
}
