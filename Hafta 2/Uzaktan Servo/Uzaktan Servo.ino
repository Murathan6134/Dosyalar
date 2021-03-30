

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servo1;

char auth[] = "JWXNpZ03G9Ks7rHIzElMFxD76qPXKPbC";
char ssid[] = "TurkTelekom_T281B";
char pass[] = "27antep34";

void setup() {
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);

  servo1.attach(D6);
}

void loop() {
  Blynk.run();
}

BLYNK_WRITE(V1) {
  servo1.write(param.asInt());
}
