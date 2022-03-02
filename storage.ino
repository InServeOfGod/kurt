#include "storage.h"

bool logEvent(String event) {
  return false;
}

bool logError(String event) {
  return false;
}

bool SDListener(void) {
  return false;
}

char* readFile(String path) {
  File file = SD.open(path, FILE_READ);

  if (file) {
    unsigned long file_size =  file.size();
    char *file_content = (char*)malloc(sizeof(char) * file_size);

    for (unsigned long i = 0 ; i < file_size; i++) {
      *(file_content + i) = (char)file.read();
    }

    file.close();
    return file_content;
  }

  return NULL;
}

DynamicJsonDocument getConfigs(void) {
  char *file_content = readFile(CONFIG_FILE);
  unsigned long file_size = strlen(file_content);

  DynamicJsonDocument jsonDoc(file_size);
  deserializeJson(jsonDoc, file_content);

  return jsonDoc;
}
