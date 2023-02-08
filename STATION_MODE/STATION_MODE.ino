#include <ESP8266WiFi.h>

char* ssid = "FPT Le Thien";
char* pass = "87654321";

void setup() {
  WiFi.disconnect();
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid,pass);
  Serial.begin(9600);

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print("...");
  }

  Serial.println(WiFi.localIP());
}

void loop() {}