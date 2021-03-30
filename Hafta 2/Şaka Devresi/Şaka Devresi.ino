


#define BLYNK_PRINT Serial

#define Kirmizi1 D0
#define Kirmizi2 D1
#define Kirmizi3 D2

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "JWXNpZ03G9Ks7rHIzElMFxD76qPXKPbC";
char ssid[] = "TurkTelekom_T281B";
char pass[] = "27antep34";

void blink_led(int led_pin) {
  digitalWrite(led_pin, HIGH);
  delay(5000);
  digitalWrite(led_pin, LOW);
}

BLYNK_WRITE(V2) {
  int pinValue = param.asInt();

  if (pinValue) {
    blink_led(Kirmizi1);
    blink_led(Kirmizi2);
    blink_led(Kirmizi3);
  }
} bnb

void setup(){
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);

  pinMode(Kirmizi1, OUTPUT);
  pinMode(Kirmizi2, OUTPUT);
  pinMode(Kirmizi3, OUTPUT);
}

void loop(){
  Blynk.run();
}
