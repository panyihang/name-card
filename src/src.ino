#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <FS.h>
#include <DNSServer.h>
#include <Adafruit_NeoPixel.h>
#include <Ticker.h>
#include <math.h>

#define PI 3.141592  
#define DebugBegin(baud_rate) Serial.begin(baud_rate)
#define DebugPrintln(message) Serial.println(message)
#define DebugPrint(message) Serial.print(message)
#define DebugPrintF(...) Serial.printf(__VA_ARGS__)
#define LedPin    5
#define NUMPIXELS 1
#define maxBlight 25

Ticker flipper;
Adafruit_NeoPixel pixels(NUMPIXELS, LedPin, NEO_GRB + NEO_KHZ800);
IPAddress apIP(10, 10, 1, 1);
DNSServer dnsServer;
ESP8266WebServer server(80);
const byte DNS_PORT = 53;
double ledCount = 0;
bool ledflag = true, webStarted = false;

void file_BpO6bL7xY1yRtni3()
{
  File file = SPIFFS.open("/index.html", "r");
  server.streamFile(file, "text/html");
  file.close();
}
void file_1Ub0PtESidBpDVRN()
{
  File file = SPIFFS.open("/ota.html", "r");
  server.streamFile(file, "text/html");
  file.close();
}
void file_TJihdARmZeUMrHyX()
{
  File file = SPIFFS.open("/fonts/f.woff", "r");
  server.streamFile(file, "font/woff");
  file.close();
}
void file_m4IFkr9WJDq1dVYM()
{
  File file = SPIFFS.open("/css/is.css", "r");
  server.streamFile(file, "text/css");
  file.close();
}
void file_ge0YU1GqmMZSxkFc()
{
  File file = SPIFFS.open("/css/font-awesome.css", "r");
  server.streamFile(file, "text/css");
  file.close();
}
void file_1d0NtuHM92UfeWXR()
{
  File file = SPIFFS.open("/css/styles.css", "r");
  server.streamFile(file, "text/css");
  file.close();
}
void file_yd1r2bKsORG7zDkp()
{
  File file = SPIFFS.open("/css/bm.css", "r");
  server.streamFile(file, "text/css");
  file.close();
}
void file_10rdBeSNn6fRhDq2()
{
  File file = SPIFFS.open("/css/fam.css", "r");
  server.streamFile(file, "text/css");
  file.close();
}
void file_73FLE5HYQplBt9VS()
{
  File file = SPIFFS.open("/css/ds.css", "r");
  server.streamFile(file, "text/css");
  file.close();
}
void file_u0X5fxCK14DHEBpt()
{
  File file = SPIFFS.open("/i/bg.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_OyrtxfA3IkQMXEmV()
{
  File file = SPIFFS.open("/i/bbg.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_lqV9owbzYHLMKkZE()
{
  File file = SPIFFS.open("/i/waifu.png", "r");
  server.streamFile(file, "image/png");
  file.close();
}
void file_DRTiBZ80JxFe6XzU()
{
  File file = SPIFFS.open("/i/bg2.png", "r");
  server.streamFile(file, "image/png");
  file.close();
}
void file_wSv10CJuP7tadKAf()
{
  File file = SPIFFS.open("/i/arrows.png", "r");
  server.streamFile(file, "image/png");
  file.close();
}
void file_7s51EG3b4krMyjux()
{
  File file = SPIFFS.open("/i/p/img1.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_jFOykg6ncYXDW4zx()
{
  File file = SPIFFS.open("/i/p/img10.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_Tu1EYJ9X0hOsUbqg()
{
  File file = SPIFFS.open("/i/p/img3.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_uqtDxHNS1hmzdMbe()
{
  File file = SPIFFS.open("/i/p/img5.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_B7qACv9sPTpD5QU2()
{
  File file = SPIFFS.open("/i/p/img9.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_tW7KZBFkf3XTw9aQ()
{
  File file = SPIFFS.open("/i/p/img12.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_coAsWh3pb2jRk8r1()
{
  File file = SPIFFS.open("/i/p/img11.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_f9EnaK5By6miL3rY()
{
  File file = SPIFFS.open("/i/p/img8.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_PGxW7F9NTUreZRKz()
{
  File file = SPIFFS.open("/i/p/img7.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_kJHfpZOa8swiQuYP()
{
  File file = SPIFFS.open("/i/p/img6.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_uJtsfrN6Bc8V5G2C()
{
  File file = SPIFFS.open("/i/p/img2.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_JzgmFVUjxQMi9T6I()
{
  File file = SPIFFS.open("/i/p/img4.jpg", "r");
  server.streamFile(file, "image/jpeg");
  file.close();
}
void file_MHuv65pjiVAJraL1()
{
  File file = SPIFFS.open("/js/jquery.cslider.js", "r");
  server.streamFile(file, "text/javascript");
  file.close();
}
void file_ehtDZqxzVYfbcQ0w()
{
  File file = SPIFFS.open("/js/jquery.diagram.js", "r");
  server.streamFile(file, "text/javascript");
  file.close();
}
void file_f7jAgZhK53HySmV2()
{
  File file = SPIFFS.open("/js/j-is-min.js", "r");
  server.streamFile(file, "text/javascript");
  file.close();
}
void file_mRj6aVsvqQEwNtU1()
{
  File file = SPIFFS.open("/js/custom.js", "r");
  server.streamFile(file, "text/javascript");
  file.close();
}
void file_tqQBP8OcmeH2afFd()
{
  File file = SPIFFS.open("/js/bs-min.js", "r");
  server.streamFile(file, "text/javascript");
  file.close();
}
void file_1xYZhPTQRngMU83V()
{
  File file = SPIFFS.open("/js/j-min.js", "r");
  server.streamFile(file, "text/javascript");
  file.close();
}
void file_Or1lYK4bcCvLASgi()
{
  File file = SPIFFS.open("/js/ml.js", "r");
  server.streamFile(file, "text/javascript");
  file.close();
}
void file_CzEN2ZcbFURlq8vL()
{
  File file = SPIFFS.open("/js/jquery.nav.js", "r");
  server.streamFile(file, "text/javascript");
  file.close();
}
void file_HlAmRKM086kUcN1i()
{
  File file = SPIFFS.open("/js/f/f402.png", "r");
  server.streamFile(file, "image/png");
  file.close();
}
void file_CBYzpscnTtWbqePQ()
{
  File file = SPIFFS.open("/js/f/fancybox_overlay.png", "r");
  server.streamFile(file, "image/png");
  file.close();
}
void file_XUrGKA6mDcBuS475()
{
  File file = SPIFFS.open("/js/f/fl402.gif", "r");
  server.streamFile(file, "image/gif");
  file.close();
}
void file_Nh6b85quPxSJkmWs()
{
  File file = SPIFFS.open("/js/f/jf.css", "r");
  server.streamFile(file, "text/css");
  file.close();
}
void file_dCPnYEKbV2i607JR()
{
  File file = SPIFFS.open("/js/f/fs.png", "r");
  server.streamFile(file, "image/png");
  file.close();
}
void file_6HpUQ80V4gxmIsLj()
{
  File file = SPIFFS.open("/js/f/fl.gif", "r");
  server.streamFile(file, "image/gif");
  file.close();
}
void file_7jPCHdNUzpIre1FE()
{
  File file = SPIFFS.open("/js/f/jfp.js", "r");
  server.streamFile(file, "text/javascript");
  file.close();
}
void file_yQoAUDl5VFKGv6t8()
{
  File file = SPIFFS.open("/js/f/b.gif", "r");
  server.streamFile(file, "image/gif");
  file.close();
}
void file_NbaLPeTuIXxgU2vK()
{
  File file = SPIFFS.open("/js/o/owl.carousel.css", "r");
  server.streamFile(file, "text/css");
  file.close();
}
void file_vwMSopxeOtfEgDLR()
{
  File file = SPIFFS.open("/js/o/ajaxloader.gif", "r");
  server.streamFile(file, "image/gif");
  file.close();
}
void file_d1eCZKyU3P6jNEsW()
{
  File file = SPIFFS.open("/js/o/owl.carousel.js", "r");
  server.streamFile(file, "text/javascript");
  file.close();
}
void file_AxMK97iRsoVSBjb6()
{
  File file = SPIFFS.open("/js/o/grabbing.png", "r");
  server.streamFile(file, "image/png");
  file.close();
}
void file_Pc5qfetGB4SjuivA()
{
  File file = SPIFFS.open("/js/o/owl.transitions.css", "r");
  server.streamFile(file, "text/css");
  file.close();
}
void file_6RvYHpxjPThNLBbd()
{
  File file = SPIFFS.open("/js/o/owl.theme.css", "r");
  server.streamFile(file, "text/css");
  file.close();
}
void file_sXWT2G1LqPwrDvhm()
{
  File file = SPIFFS.open("/js/o/owl.carousel.min.js", "r");
  server.streamFile(file, "text/javascript");
  file.close();
}

void getOtaInfo()
{
  String message = "<!doctype html> <html lang=\"zh_cn\"> <meta charset=\"utf-8\"> 提交成功，以下为提交信息: <br>";
  String STA_SSID, STA_PASSWD;
  bool otaFlag = true;
  for (uint8_t i = 0; i < server.args(); i++)
  {
    if (server.argName(i) == "ssid" or server.argName(i) == "password")
      message += " " + server.argName(i) + ": " + server.arg(i) + "<br>";
  }
  message += "芯片将立即重启并进入OTA升级模式，详细log详见uart0 波特率115200";
  server.send(200, "text/html", message);

  for (uint8_t i = 0; i < server.args(); i++)
  {
    if (server.argName(i) == "ssid")
    {
      STA_SSID = server.arg(i);
    }
    else if (server.argName(i) == "password")
    {
      STA_PASSWD = server.arg(i);
    }
  }
  Serial.print(STA_SSID + ":" + STA_PASSWD);
}

void changeLed() {
  double tmp = 0;
  tmp = getAbsValue(int(sin(ledCount) * maxBlight));
  if (ledCount >= 3 * PI) {
    if ( int(ledCount / PI) % 2 )
    {
      pixels.setPixelColor(0, pixels.Color(0, tmp, 0));
    }
    else {
      pixels.setPixelColor(0 , pixels.Color(0,tmp, tmp));
    }
  }
  else {
    pixels.setPixelColor( 0, pixels.Color(getAbsValue(int(sin(ledCount) * maxBlight*2))/2,0, getAbsValue(int(cos(ledCount) * maxBlight*2))/2));
  }
       
  pixels.show();

  if (ledflag) {
    ledCount += 0.01;
  }
  else {
    ledCount -= 0.01;
  }
  DebugPrint(tmp);
  DebugPrint(" ");
  DebugPrint(ledCount);
  DebugPrintln("");
}
int getAbsValue(int value) {
  if (value < 0) {
    value = -value;
  }
  return value;
}
void setup()
{
  pinMode(2, OUTPUT);
  flipper.attach(0.008, changeLed);
  SPIFFS.begin();
  DebugBegin(115200);
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(apIP, apIP, IPAddress(255, 0, 0, 0));
  WiFi.softAP("WIFI-business-card");
  dnsServer.setTTL(300);
  dnsServer.setErrorReplyCode(DNSReplyCode::ServerFailure);
  bool status = dnsServer.start(DNS_PORT, "www.hello.com", apIP);

  if (status)
  {
    DebugPrintln("start dnsserver success.");
  }
  else
  {
    DebugPrintln("start dnsserver failed.");
  }

  server.on("/getOTA/", getOtaInfo);
  server.on("/", file_BpO6bL7xY1yRtni3);
  server.on("/index.html", file_BpO6bL7xY1yRtni3);
  server.on("/ota.html", file_1Ub0PtESidBpDVRN);
  server.on("/fonts/f.woff", file_TJihdARmZeUMrHyX);
  server.on("/css/is.css", file_m4IFkr9WJDq1dVYM);
  server.on("/css/font-awesome.css", file_ge0YU1GqmMZSxkFc);
  server.on("/css/styles.css", file_1d0NtuHM92UfeWXR);
  server.on("/css/bm.css", file_yd1r2bKsORG7zDkp);
  server.on("/css/fam.css", file_10rdBeSNn6fRhDq2);
  server.on("/css/ds.css", file_73FLE5HYQplBt9VS);
  server.on("/i/bg.jpg", file_u0X5fxCK14DHEBpt);
  server.on("/i/bbg.jpg", file_OyrtxfA3IkQMXEmV);
  server.on("/i/waifu.png", file_lqV9owbzYHLMKkZE);
  server.on("/i/bg2.png", file_DRTiBZ80JxFe6XzU);
  server.on("/i/arrows.png", file_wSv10CJuP7tadKAf);
  server.on("/i/p/img1.jpg", file_7s51EG3b4krMyjux);
  server.on("/i/p/img10.jpg", file_jFOykg6ncYXDW4zx);
  server.on("/i/p/img3.jpg", file_Tu1EYJ9X0hOsUbqg);
  server.on("/i/p/img5.jpg", file_uqtDxHNS1hmzdMbe);
  server.on("/i/p/img9.jpg", file_B7qACv9sPTpD5QU2);
  server.on("/i/p/img12.jpg", file_tW7KZBFkf3XTw9aQ);
  server.on("/i/p/img11.jpg", file_coAsWh3pb2jRk8r1);
  server.on("/i/p/img8.jpg", file_f9EnaK5By6miL3rY);
  server.on("/i/p/img7.jpg", file_PGxW7F9NTUreZRKz);
  server.on("/i/p/img6.jpg", file_kJHfpZOa8swiQuYP);
  server.on("/i/p/img2.jpg", file_uJtsfrN6Bc8V5G2C);
  server.on("/i/p/img4.jpg", file_JzgmFVUjxQMi9T6I);
  server.on("/js/jquery.cslider.js", file_MHuv65pjiVAJraL1);
  server.on("/js/jquery.diagram.js", file_ehtDZqxzVYfbcQ0w);
  server.on("/js/j-is-min.js", file_f7jAgZhK53HySmV2);
  server.on("/js/custom.js", file_mRj6aVsvqQEwNtU1);
  server.on("/js/bs-min.js", file_tqQBP8OcmeH2afFd);
  server.on("/js/j-min.js", file_1xYZhPTQRngMU83V);
  server.on("/js/ml.js", file_Or1lYK4bcCvLASgi);
  server.on("/js/jquery.nav.js", file_CzEN2ZcbFURlq8vL);
  server.on("/js/f/f402.png", file_HlAmRKM086kUcN1i);
  server.on("/js/f/fancybox_overlay.png", file_CBYzpscnTtWbqePQ);
  server.on("/js/f/fl402.gif", file_XUrGKA6mDcBuS475);
  server.on("/js/f/jf.css", file_Nh6b85quPxSJkmWs);
  server.on("/js/f/fs.png", file_dCPnYEKbV2i607JR);
  server.on("/js/f/fl.gif", file_6HpUQ80V4gxmIsLj);
  server.on("/js/f/jfp.js", file_7jPCHdNUzpIre1FE);
  server.on("/js/f/b.gif", file_yQoAUDl5VFKGv6t8);
  server.on("/js/o/owl.carousel.css", file_NbaLPeTuIXxgU2vK);
  server.on("/js/o/ajaxloader.gif", file_vwMSopxeOtfEgDLR);
  server.on("/js/o/owl.carousel.js", file_d1eCZKyU3P6jNEsW);
  server.on("/js/o/grabbing.png", file_AxMK97iRsoVSBjb6);
  server.on("/js/o/owl.transitions.css", file_Pc5qfetGB4SjuivA);
  server.on("/js/o/owl.theme.css", file_6RvYHpxjPThNLBbd);
  server.on("/js/o/owl.carousel.min.js", file_sXWT2G1LqPwrDvhm);

  server.onNotFound([]() {
    server.send(404, "text/plain", "FileNotFound");
    DebugPrint("FileNotFound \n");
  });
  server.begin();
  pixels.begin();
  digitalWrite(2,1);
}

void loop()
{
  dnsServer.processNextRequest();
  server.handleClient();

}
