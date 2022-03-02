/*
  ESP8266mod Wifi module
  Board : NodeMCU 1.0 (ESP 12-E Module)

  author : InServeOfGod
  languages : cpp, html, css, js
  encoding : utf-8
*/

#include "kernel.h"

void setup() {
  // serial portunu 115200'e bağladık
  Serial.begin(115200);

  while (!Serial) {
    delay(1);
  }

  // şalterleri dinlemeye aldık
  pinMode(SWITCH_PIN, INPUT);
  pinMode(DOOR_PIN, INPUT);

  // Hafıza kartını çalıştırdık
  if (SD.begin(CS_PIN)) {
    Serial.println("SD başlatıldı.");
  } else {
    Serial.println("SD başlatılamadı.");
  }
}

void loop() {
  Serial.print("switch : ");
  Serial.println(digitalRead(SWITCH_PIN));
  delay(500);

  Serial.println(readFile("icons.txt"));

  Serial.print("door status : ");
  Serial.println(digitalRead(DOOR_PIN));
  delay(500);

  if (digitalRead(DOOR_PIN)) {
    tone(SOUND_PIN, NOTE_CS8, 500);
    delay(1000);
  }
}
