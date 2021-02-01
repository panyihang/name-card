#include <ESP8266WiFi.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>

#define DebugBegin(baud_rate)    Serial.begin(baud_rate)
#define DebugPrintln(message)    Serial.println(message)
#define DebugPrint(message)    Serial.print(message)
#define DebugPrintF(...) Serial.printf( __VA_ARGS__ )

const byte DNS_PORT = 53;
IPAddress apIP(10, 10, 1, 1);
DNSServer dnsServer;
ESP8266WebServer webServer(80);

void setup() {
  DebugBegin(115200);
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(apIP, apIP, IPAddress(255, 0, 0, 0));
  WiFi.softAP("Pan's name-card");
  dnsServer.setTTL(300);
  dnsServer.setErrorReplyCode(DNSReplyCode::ServerFailure);
  bool status = dnsServer.start(DNS_PORT, "www.hello.com", apIP);

  if (status) {
    DebugPrintln("start dnsserver success.");
  } else {
    DebugPrintln("start dnsserver failed.");
  }

  webServer.onNotFound([]() {
    String message = "<html> <h1> welcome to this web server<h1> ";
    message += "<h3> <b> see our project at  ";
    message += "<a href='https://github.com/panyihang/name-card'>here</a></b></h3> <br>";
    message += "view URI is : ";
    message += webServer.uri();
    webServer.send(200, "text/html", message);
  });
  webServer.begin();
}

void loop() {
  dnsServer.processNextRequest();
  webServer.handleClient();
}