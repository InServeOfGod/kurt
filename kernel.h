#include <SD.h>
#include <ESP8266WiFi.h>
#include "ArduinoJson.h"
#include "pitches.h"
#include "storage.h"
#include "network.h"

// pin tanımlamaları
#define SWITCH_PIN 5
#define SOUND_PIN 4
#define DOOR_PIN 2
#define CS_PIN 15

// ağ kural tanımlamaları
#define MAX_CLIENT 1

// dosya ismi tanımlamaları
#define CONFIG_FILE "config.json"

// server değişkeni
WiFiServer server(80);
