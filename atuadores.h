#include "Projeto.h"

void setupAtuadores() {
  valvula.attach(servoPin);
  pinMode(motorPin, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led30, OUTPUT);
  pinMode(led50, OUTPUT);
  pinMode(led70, OUTPUT);
  pinMode(led90, OUTPUT);
}

void controlarAtuadores() {
  if (nivel <= 10) bombaLigada = true;
  if (nivel >= 90) bombaLigada = false;

  digitalWrite(motorPin, bombaLigada);
  valvula.write(bombaLigada ? 90 : 0);

  digitalWrite(led10, nivel >= 10);
  digitalWrite(led30, nivel >= 30);
  digitalWrite(led50, nivel >= 50);
  digitalWrite(led70, nivel >= 70);
  digitalWrite(led90, nivel >= 90);
}
