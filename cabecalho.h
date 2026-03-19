#pragma once
#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>
#include <EEPROM.h>

// --- Instâncias Globais ---
extern LiquidCrystal_I2C lcd;
extern Servo valvula;

// --- Pinos ---
extern const int potPin;
extern const int motorPin;
extern const int servoPin;
extern const int led10;
extern const int led30;
extern const int led50;
extern const int led70;
extern const int led90;

// --- Variáveis Globais ---
extern int nivel;
extern int nivelAnterior;
extern unsigned long consumo;
extern unsigned long consumoSalvo;
extern bool bombaLigada;
extern unsigned long tempoAnterior;
extern unsigned long tempoEEPROM;
extern int tela;
extern const int enderecoEEPROM;

// --- Declaração das Funções ---
void setupSensores();
void lerSensores();
void setupAtuadores();
void controlarAtuadores();
void setupDisplay();
void atualizarDisplay();
void setupMemoria();
void gerenciarMemoria();
