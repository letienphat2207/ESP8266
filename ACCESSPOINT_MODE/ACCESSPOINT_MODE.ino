#include <ESP8266WiFi.h>


char* ssid = "SMART-ESP8266";
char* pass = "12345678";
IPAddress ip(192, 168, 1, 1);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 255, 0);


void setup() {
  WiFi.disconnect();
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(ip, gateway, subnet);
  WiFi.softAP(ssid,pass);
  
  Serial.begin(9600);
  Serial.println("AccessPoint Mode");
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}