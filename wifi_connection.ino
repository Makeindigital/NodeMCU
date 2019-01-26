#include <ESP8266WiFi.h>

const char* ssid = "xxxxxxxxx";
const char* password = "xxxxxxxxx";

WiFiServer server(80);

void setup() {
  Serial.begin(9600);
  delay(10);
  
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");
  server.begin();
  Serial.println("Server started");
  Serial.print("Use this URL to connect: ");
  Serial.print("http://");
  Serial.print(WiFi.localIP());
  Serial.println("/");
}
 

void loop() {
  // put your main code here, to run repeatedly:

}
