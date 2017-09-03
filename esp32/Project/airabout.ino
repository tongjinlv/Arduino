/**
    Get the Weather from intenet with esp8266
 
    get data from 心知天气：[url=http://www.thinkpage.cn/]http://www.thinkpage.cn/[/url]
    api 文档说明：[url=http://www.thinkpage.cn/doc]http://www.thinkpage.cn/doc[/url]
    city id list download ：[url=http://www.thinkpage.cn/data/thinkpage_cities.zip]http://www.thinkpage.cn/data/thinkpage_cities.zip[/url]
 
    Created by yfrobot, 2016.8.23
    This example is in public domain.
*/
 
#include <WiFi.h>
#include <ArduinoJson.h>
#include <WiFiMulti.h>

WiFiMulti wifiMulti;
void airabout_test()
{
    Serial.begin(115200);
    delay(10);
    wifiMulti.addAP("TP-LINK_5024", "123123123");
    wifiMulti.addAP("ssid_from_AP_2", "your_password_for_AP_2");
    wifiMulti.addAP("ssid_from_AP_3", "your_password_for_AP_3");

    Serial.println("Connecting Wifi...");
    if(wifiMulti.run() == WL_CONNECTED) {
        Serial.println("");
        Serial.println("WiFi connected");
        Serial.println("IP address: ");
        Serial.println(WiFi.localIP());
    }
    while(1)
    {
      
    if(wifiMulti.run() != WL_CONNECTED) {
        Serial.println("WiFi not connected!");
        delay(1000);
    }
    }
}

