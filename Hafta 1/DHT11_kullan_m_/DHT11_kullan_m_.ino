#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 2
#define DHTTYPE DHT11 


DHT dht(DHTPIN,DHTTYPE);




#define Sinyal A0


void setup() {
  dht.begin();
  Serial.begin(9600);
 
}

void loop() {

  float Sicaklik = dht.readTemperature();
  float Nem  = dht.readHumidity();

  float Sicaklik_kelvin = Sicaklik + 273;
  float Sicaklik_Fahrenheit = (9*Sicaklik)/5 + 32;

  Serial.println("Sicakligin Kelvin Degeri");
  Serial.println(Sicaklik_kelvin);
  Serial.println("\n");
  Serial.println("Sicakligin Fahrenheit Degeri");
  Serial.println(Sicaklik_Fahrenheit);
  Serial.println("\n");
  Serial.println("Nem degeri");
  Serial.println(Nem);
  
  delay(3000);

  
}
