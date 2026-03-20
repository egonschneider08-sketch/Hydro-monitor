Sistema de Controle e Monitoramento de Nível de Água com Arduino
Descrição

Este projeto consiste em um sistema embarcado desenvolvido com Arduino para monitoramento e controle automático do nível de água em um reservatório. O sistema simula um sensor de nível utilizando um potenciômetro e realiza o controle de uma bomba e de uma válvula com base em limites predefinidos.

Além disso, o sistema calcula e armazena o consumo total de água ao longo do tempo utilizando a memória EEPROM, garantindo persistência dos dados mesmo após desligamentos.

Arquitetura do Sistema
4

O sistema é composto pelos seguintes elementos:

Entrada analógica para leitura de nível

Atuadores para controle de fluxo

Interface visual com display e LEDs

Armazenamento persistente de dados

Funcionalidades

Monitoramento contínuo do nível de água (0% a 100%)

Controle automático da bomba:

Ativação quando o nível é menor ou igual a 10%

Desativação quando o nível é maior ou igual a 90%

Controle de válvula por servo motor

Indicação visual do nível com LEDs em diferentes faixas

Exibição de informações em display LCD I2C:

Tela de nível e estado da bomba

Tela de consumo total acumulado

Registro de consumo baseado na variação do nível

Armazenamento do consumo na EEPROM

Monitoramento via comunicação serial

Componentes Utilizados
6

Arduino Uno, Nano ou equivalente

Display LCD 16x2 com interface I2C (endereço 0x27)

Servo motor (ex: SG90)

Motor DC (bomba)

Potenciômetro (simulando sensor de nível)

5 LEDs com resistores

Protoboard e jumpers

Mapeamento de Pinos
Componente	Pino Arduino
Potenciômetro	A0
Motor (bomba)	9
Servo motor	10
LED 10%	2
LED 30%	3
LED 50%	4
LED 70%	5
LED 90%	6
LCD I2C	0x27
Lógica de Funcionamento

O valor do potenciômetro é lido continuamente e convertido em porcentagem de nível.

O sistema calcula o consumo apenas quando há aumento no nível.

A bomba é controlada automaticamente conforme os limites estabelecidos.

O servo motor simula a abertura e fechamento da válvula.

LEDs indicam visualmente o nível atual do reservatório.

O display alterna automaticamente entre duas telas a cada 2 segundos.

O consumo é salvo periodicamente na EEPROM.

Persistência de Dados

O consumo total é armazenado na EEPROM a cada 5 segundos.

A gravação ocorre apenas quando há alteração no valor.

Valores inválidos são descartados na inicialização para evitar erros.

Saída Serial

O sistema envia dados para o monitor serial no seguinte formato:

Nivel: XX% | Consumo: XXXX L | Bomba: Ligado/Desligado
Instalação e Uso

Instale as bibliotecas necessárias na Arduino IDE:

Wire.h

LiquidCrystal_I2C.h

Servo.h

EEPROM.h

Monte o circuito conforme o mapeamento de pinos.

Faça o upload do código para o Arduino.

Abra o Monitor Serial com baud rate de 9600.

Utilize o potenciômetro para simular o nível do reservatório.
