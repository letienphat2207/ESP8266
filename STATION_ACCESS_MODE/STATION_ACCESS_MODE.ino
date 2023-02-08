#include <ESP8266WiFi.h>

//============AP infor=========//
char* ssid_ap = "SMART-ESP8266";
char* pass_ap = "12345678";
IPAddress ip_ap(192, 168, 1, 1);
IPAddress gateway_ap(192, 168, 1, 1);
IPAddress subnet_ap(255, 255, 255, 0);

//===========STA infor=========//
char* ssid_sta = "FPT Le Thien";
char* pass_sta = "87654321";

void setup() {
  WiFi.disconnect();
  WiFi.mode(WIFI_AP_STA);
  WiFi.softAPConfig(ip_ap, gateway_ap, subnet_ap);
  WiFi.softAP(ssid_ap, pass_ap);
  
  WiFi.begin(ssid_sta, pass_sta);
  Serial.begin(9600);

  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print("...");
  }

  Serial.println(WiFi.localIP());
}

void loop() {}