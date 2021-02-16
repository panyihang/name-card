#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <FS.h>
 
const char ssid[] = "TP-LINK_5AFF";
const char pass[] = "5t4r3e2w1q";
const char* host = "jarvis";
 
ESP8266WebServer server(80);

void file_vOaHNZSh0UdBfsi1() { 
       File file = SPIFFS.open("/index.html","r"); 
       server.streamFile(file, "text/html"); 
       file.close();
}
void file_Yuxya3Dj59JFTvrQ() { 
       File file = SPIFFS.open("/ota.html","r"); 
       server.streamFile(file, "text/html"); 
       file.close();
}
void file_psnKUAQzbeVZY5gJ() { 
       File file = SPIFFS.open("/fonts/f.woff","r"); 
       server.streamFile(file, "font/woff"); 
       file.close();
}
void file_DS5uJVAPgb8NZB0o() { 
       File file = SPIFFS.open("/css/is.css","r"); 
       server.streamFile(file, "text/css"); 
       file.close();
}
void file_qnsur9OY3GNSydCj() { 
       File file = SPIFFS.open("/css/font-awesome.css","r"); 
       server.streamFile(file, "text/css"); 
       file.close();
}
void file_K5Xizpco29bBs6Vw() { 
       File file = SPIFFS.open("/css/styles.css","r"); 
       server.streamFile(file, "text/css"); 
       file.close();
}
void file_V1LfihpwJ2UH4lsK() { 
       File file = SPIFFS.open("/css/bm.css","r"); 
       server.streamFile(file, "text/css"); 
       file.close();
}
void file_RhvXP6HwIdcKnQD9() { 
       File file = SPIFFS.open("/css/fam.css","r"); 
       server.streamFile(file, "text/css"); 
       file.close();
}
void file_Gz2VMYyeKmaL3HXv() { 
       File file = SPIFFS.open("/css/ds.css","r"); 
       server.streamFile(file, "text/css"); 
       file.close();
}
void file_4WNjM8EdFGZh2v9P() { 
       File file = SPIFFS.open("/i/bg.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_mBwoj3aGWRDYZ9uA() { 
       File file = SPIFFS.open("/i/bbg.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_53YRzT9WUO7bADFi() { 
       File file = SPIFFS.open("/i/p-1.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_O7vGjdJugPi8MCfq() { 
       File file = SPIFFS.open("/i/bg2.png","r"); 
       server.streamFile(file, "image/png"); 
       file.close();
}
void file_m6tEPA07TxWMXbFe() { 
       File file = SPIFFS.open("/i/arrows.png","r"); 
       server.streamFile(file, "image/png"); 
       file.close();
}
void file_jtHdVnXoyQ6Ne7AC() { 
       File file = SPIFFS.open("/i/p/img1.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_0xeqoSMjyImhFNUw() { 
       File file = SPIFFS.open("/i/p/img10.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_dJ3aPjp82Iu56KWo() { 
       File file = SPIFFS.open("/i/p/img3.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_ofLlseKr8DwQ5dGZ() { 
       File file = SPIFFS.open("/i/p/img5.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_SgylBuzP1FjLdowK() { 
       File file = SPIFFS.open("/i/p/img9.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_jCDfrU1bqBW8SkyL() { 
       File file = SPIFFS.open("/i/p/img12.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_EsANI4YO82hdQZtV() { 
       File file = SPIFFS.open("/i/p/img11.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_pG1jxkt8g7hPlqwf() { 
       File file = SPIFFS.open("/i/p/img8.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_GRd9wz3bEuoOSeWh() { 
       File file = SPIFFS.open("/i/p/img7.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_89I2wz3t61bxYMc7() { 
       File file = SPIFFS.open("/i/p/img6.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_gArWs6eQ58hT9lCP() { 
       File file = SPIFFS.open("/i/p/img2.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_G4w82nosbAqBIdPc() { 
       File file = SPIFFS.open("/i/p/img4.jpg","r"); 
       server.streamFile(file, "image/jpeg"); 
       file.close();
}
void file_PnBtheMaHdIFOuQ7() { 
       File file = SPIFFS.open("/js/jquery.cslider.js","r"); 
       server.streamFile(file, "text/javascript"); 
       file.close();
}
void file_pBrWgAOSnQCxkdvN() { 
       File file = SPIFFS.open("/js/jquery.diagram.js","r"); 
       server.streamFile(file, "text/javascript"); 
       file.close();
}
void file_YO5RwtVZdCTISu9P() { 
       File file = SPIFFS.open("/js/j-is-min.js","r"); 
       server.streamFile(file, "text/javascript"); 
       file.close();
}
void file_EW9RkM7XSIVnzOi8() { 
       File file = SPIFFS.open("/js/custom.js","r"); 
       server.streamFile(file, "text/javascript"); 
       file.close();
}
void file_btT3PXFGVJnDLswq() { 
       File file = SPIFFS.open("/js/bs-min.js","r"); 
       server.streamFile(file, "text/javascript"); 
       file.close();
}
void file_jnhE3rR0Mp92dUBg() { 
       File file = SPIFFS.open("/js/j-min.js","r"); 
       server.streamFile(file, "text/javascript"); 
       file.close();
}
void file_ruJzGnfXDNALvbpi() { 
       File file = SPIFFS.open("/js/ml.js","r"); 
       server.streamFile(file, "text/javascript"); 
       file.close();
}
void file_zBqYceaU2TrIWCKR() { 
       File file = SPIFFS.open("/js/jquery.nav.js","r"); 
       server.streamFile(file, "text/javascript"); 
       file.close();
}
void file_8BFeXvJqQ2kAGmfE() { 
       File file = SPIFFS.open("/js/f/f402.png","r"); 
       server.streamFile(file, "image/png"); 
       file.close();
}
void file_OxXTZAVBpFsqatwD() { 
       File file = SPIFFS.open("/js/f/fancybox_overlay.png","r"); 
       server.streamFile(file, "image/png"); 
       file.close();
}
void file_Ca4LYXy3UQZmsDSe() { 
       File file = SPIFFS.open("/js/f/fl402.gif","r"); 
       server.streamFile(file, "image/gif"); 
       file.close();
}
void file_XdP7Ag5f8Y0raNGO() { 
       File file = SPIFFS.open("/js/f/jf.css","r"); 
       server.streamFile(file, "text/css"); 
       file.close();
}
void file_h63BLKkz9FdpTRev() { 
       File file = SPIFFS.open("/js/f/fs.png","r"); 
       server.streamFile(file, "image/png"); 
       file.close();
}
void file_MFl7b2XDY8jT6RSO() { 
       File file = SPIFFS.open("/js/f/fl.gif","r"); 
       server.streamFile(file, "image/gif"); 
       file.close();
}
void file_AHvcYzPi91f76JVM() { 
       File file = SPIFFS.open("/js/f/jfp.js","r"); 
       server.streamFile(file, "text/javascript"); 
       file.close();
}
void file_iCMVodWHw3Er0TNJ() { 
       File file = SPIFFS.open("/js/f/b.gif","r"); 
       server.streamFile(file, "image/gif"); 
       file.close();
}
void file_vZzgo96tn4O2lTIy() { 
       File file = SPIFFS.open("/js/o/owl.carousel.css","r"); 
       server.streamFile(file, "text/css"); 
       file.close();
}
void file_d4HVOs9o02qAxFRj() { 
       File file = SPIFFS.open("/js/o/ajaxloader.gif","r"); 
       server.streamFile(file, "image/gif"); 
       file.close();
}
void file_h2BEQ1deOR9zciTm() { 
       File file = SPIFFS.open("/js/o/owl.carousel.js","r"); 
       server.streamFile(file, "text/javascript"); 
       file.close();
}
void file_mV1o5zeitIZYsXfc() { 
       File file = SPIFFS.open("/js/o/grabbing.png","r"); 
       server.streamFile(file, "image/png"); 
       file.close();
}
void file_tb2OoMpJ5IvGyhER() { 
       File file = SPIFFS.open("/js/o/owl.transitions.css","r"); 
       server.streamFile(file, "text/css"); 
       file.close();
}
void file_Ig6eG4qoKk5aHRX2() { 
       File file = SPIFFS.open("/js/o/owl.theme.css","r"); 
       server.streamFile(file, "text/css"); 
       file.close();
}
void file_FyQ7r60TYwazpGRl() { 
       File file = SPIFFS.open("/js/o/owl.carousel.min.js","r"); 
       server.streamFile(file, "text/javascript"); 
       file.close();
}

void getOtaInfo(){
    String message = "<!doctype html> <html lang=\"zh_cn\"> <meta charset=\"utf-8\"> 提交成功，以下为提交信息: <br>";
    String STA_SSID,STA_PASSWD;
    bool otaFlag = true;
    for (uint8_t i = 0; i < server.args(); i++) {
      if (server.argName(i) == "ssid" or server.argName(i) == "password")
      message += " " + server.argName(i) + ": " + server.arg(i) + "<br>";
    }
    message += "芯片将立即重启并进入OTA升级模式，详细log详见uart0 波特率115200";
    server.send(200, "text/html", message);
    
    for (uint8_t i = 0; i < server.args(); i++) {
      if (server.argName(i) == "ssid"){
        STA_SSID = server.arg(i);
      }
      else if(server.argName(i) == "password"){
        STA_PASSWD = server.arg(i);
      }
    }
    Serial.print(STA_SSID + ":" + STA_PASSWD);
  }
  
void setup( ){
  Serial.begin(115200);
 
  SPIFFS.begin(); 
 
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  IPAddress ip = WiFi.localIP();
  
  if (!MDNS.begin(host, ip)) {
    Serial.println("Error setting up MDNS responder!");
    while(1) { 
      delay(1000);
    }
  }
  Serial.println("mDNS responder started");
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println("");
  Serial.print("Connected! IP address: ");
  Serial.println(WiFi.localIP());
 
  MDNS.begin(host);
  server.on("/getOTA/",getOtaInfo);
server.on("/",file_vOaHNZSh0UdBfsi1);
server.on("/index.html",file_vOaHNZSh0UdBfsi1);
server.on("/ota.html",file_Yuxya3Dj59JFTvrQ);
server.on("/fonts/f.woff",file_psnKUAQzbeVZY5gJ);
server.on("/css/is.css",file_DS5uJVAPgb8NZB0o);
server.on("/css/font-awesome.css",file_qnsur9OY3GNSydCj);
server.on("/css/styles.css",file_K5Xizpco29bBs6Vw);
server.on("/css/bm.css",file_V1LfihpwJ2UH4lsK);
server.on("/css/fam.css",file_RhvXP6HwIdcKnQD9);
server.on("/css/ds.css",file_Gz2VMYyeKmaL3HXv);
server.on("/i/bg.jpg",file_4WNjM8EdFGZh2v9P);
server.on("/i/bbg.jpg",file_mBwoj3aGWRDYZ9uA);
server.on("/i/p-1.jpg",file_53YRzT9WUO7bADFi);
server.on("/i/bg2.png",file_O7vGjdJugPi8MCfq);
server.on("/i/arrows.png",file_m6tEPA07TxWMXbFe);
server.on("/i/p/img1.jpg",file_jtHdVnXoyQ6Ne7AC);
server.on("/i/p/img10.jpg",file_0xeqoSMjyImhFNUw);
server.on("/i/p/img3.jpg",file_dJ3aPjp82Iu56KWo);
server.on("/i/p/img5.jpg",file_ofLlseKr8DwQ5dGZ);
server.on("/i/p/img9.jpg",file_SgylBuzP1FjLdowK);
server.on("/i/p/img12.jpg",file_jCDfrU1bqBW8SkyL);
server.on("/i/p/img11.jpg",file_EsANI4YO82hdQZtV);
server.on("/i/p/img8.jpg",file_pG1jxkt8g7hPlqwf);
server.on("/i/p/img7.jpg",file_GRd9wz3bEuoOSeWh);
server.on("/i/p/img6.jpg",file_89I2wz3t61bxYMc7);
server.on("/i/p/img2.jpg",file_gArWs6eQ58hT9lCP);
server.on("/i/p/img4.jpg",file_G4w82nosbAqBIdPc);
server.on("/js/jquery.cslider.js",file_PnBtheMaHdIFOuQ7);
server.on("/js/jquery.diagram.js",file_pBrWgAOSnQCxkdvN);
server.on("/js/j-is-min.js",file_YO5RwtVZdCTISu9P);
server.on("/js/custom.js",file_EW9RkM7XSIVnzOi8);
server.on("/js/bs-min.js",file_btT3PXFGVJnDLswq);
server.on("/js/j-min.js",file_jnhE3rR0Mp92dUBg);
server.on("/js/ml.js",file_ruJzGnfXDNALvbpi);
server.on("/js/jquery.nav.js",file_zBqYceaU2TrIWCKR);
server.on("/js/f/f402.png",file_8BFeXvJqQ2kAGmfE);
server.on("/js/f/fancybox_overlay.png",file_OxXTZAVBpFsqatwD);
server.on("/js/f/fl402.gif",file_Ca4LYXy3UQZmsDSe);
server.on("/js/f/jf.css",file_XdP7Ag5f8Y0raNGO);
server.on("/js/f/fs.png",file_h63BLKkz9FdpTRev);
server.on("/js/f/fl.gif",file_MFl7b2XDY8jT6RSO);
server.on("/js/f/jfp.js",file_AHvcYzPi91f76JVM);
server.on("/js/f/b.gif",file_iCMVodWHw3Er0TNJ);
server.on("/js/o/owl.carousel.css",file_vZzgo96tn4O2lTIy);
server.on("/js/o/ajaxloader.gif",file_d4HVOs9o02qAxFRj);
server.on("/js/o/owl.carousel.js",file_h2BEQ1deOR9zciTm);
server.on("/js/o/grabbing.png",file_mV1o5zeitIZYsXfc);
server.on("/js/o/owl.transitions.css",file_tb2OoMpJ5IvGyhER);
server.on("/js/o/owl.theme.css",file_Ig6eG4qoKk5aHRX2);
server.on("/js/o/owl.carousel.min.js",file_FyQ7r60TYwazpGRl);

  server.onNotFound([](){
    server.send(404, "text/plain", "FileNotFound");
  });
 
  server.begin();
  Serial.println("HTTP server started");
 
  MDNS.setInstanceName("Cubie's ESP8266");
  MDNS.addService("http", "tcp", 80);
}
 
void loop( ){
  server.handleClient();
}
