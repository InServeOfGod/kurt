#include "network.h"

bool connectWireless(void) {
  return false;
}

bool activateAccessPoint(void) {
  return false;
}

void getAPStatus(void) {
  /*
    Serial.println();
    Serial.print("Bağlanan kullanıcı sayısı : ");
    Serial.printf("%d", WiFi.softAPgetStationNum());
    Serial.println();

    Serial.print("Bağlantı noktası IP adresi : ");
    Serial.println(WiFi.softAPIP());

    Serial.print("Bağlantı noktası MAC adresi : ");
    Serial.println(WiFi.softAPmacAddress().c_str());
  */
}

void getWIFIStatus(void) {
  /*
        while (_loop) {
    switch (WiFi.status()) {
      case WL_CONNECTED:
        Serial.println("Wifi ağına bağlanıldı.");
        digitalWrite(LED_BUILTIN, HIGH);
        _loop = false;
        break;

      case WL_NO_SSID_AVAIL:
        Serial.println("Böyle bir wifi ismi yok!");
        _loop = false;
        break;

      case WL_CONNECT_FAILED:
        Serial.println("Bağlantı başarısız!");
        _loop = false;
        break;

      case WL_WRONG_PASSWORD:
        Serial.println("Yanlış şifre!");
        _loop = false;
        break;

      case WL_IDLE_STATUS:
        Serial.print(".");
        break;

      case WL_DISCONNECTED:
        Serial.print(".");
        break;

      case -1:
        Serial.println("Cihaz, bağlantı kurarken zaman aşımına uğradı!");
        _loop = false;
        break;

      default:
        Serial.println("Bilinmyen bir hata oluştu!");
        _loop = false;
    }

    **************************

      if (WiFi.isConnected()) {
      Serial.print("MAC adresi : ");
      Serial.println(WiFi.macAddress());

      Serial.print("Yerel IP : ");
      Serial.println(WiFi.localIP());

      Serial.print("Alt ağlar : ");
      Serial.println(WiFi.subnetMask());

      Serial.print("Arayüz IP : ");
      Serial.println(WiFi.gatewayIP());

      Serial.print("DNS IP : ");
      Serial.println(WiFi.dnsIP());

      Serial.print("Host adı : ");
      Serial.println(WiFi.hostname());

      Serial.print("Durum : ");
      Serial.println("Bağlı");

      Serial.print("Wifi ismi (SSID) : ");
      Serial.println(WiFi.SSID());

      Serial.print("Şifre : ");
      Serial.println(WiFi.psk());

      Serial.print("Wifi MAC adresi (BSSID) : ");
      Serial.println(WiFi.BSSIDstr());

      Serial.printf("Bağlantı gücü : %d dBm\n", WiFi.RSSI());
    } else {
      Serial.println("Bağlantı yok!");
    }
  */
}

void setInterfaceHeader(String) {
  /*

      String buff;
    buff.reserve(128);  // this will prevent fragmentation of ram
    buff = "HTTP/1.1 200 OK\r\nContent-Type: text/html\r\n\r\n";
    return buff;
  */


}

String getInterfaceHeader(void) {
  return "";
}

void prepareInterface(void) {
  /*
    String buff;
    buff.reserve(256);
    buff = "<!DOCTYPE html><html><head><style type='text/css'>a {color: white} body{background: green}</style><title>hello world</title></head><body><a href='http://192.168.1.1'>go to modem gateway</a></body></html>";
    return buff;

  */
}

void listenClient(void) {

  /*

      while (true) {
      WiFiClient _client = server.available();

      if (_client) {
        Serial.println("Bir kullanıcı bağlandı.");

        if (_client.connected()) {
          while (_client.available()) {
            Serial.print((char)_client.read());
          }
        }

        String web_page = prepareHeader() + prepareIndex();
        _client.println(web_page);
        _client.stop();
      }
    }
  */

}
