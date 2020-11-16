#include <ESP8266WiFi.h>

void setup(){
    Serial.begin(115200);
    Serial.println("siz maj bit!");
    Serial.println("akafuka");
    Serial.println("new Message");
}

void loop(){
    delay(100);
    Serial.println("newBranch");
}