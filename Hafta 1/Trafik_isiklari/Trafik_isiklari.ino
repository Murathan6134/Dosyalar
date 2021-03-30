#define Kirmizi 2
#define Sari 3
#define Yesil 4

void setup() {
pinMode(Kirmizi,OUTPUT);
pinMode(Sari,OUTPUT);
pinMode(Yesil,OUTPUT);
  
}

void loop() {
 digitalWrite(Kirmizi,HIGH);
 delay(10000);
 digitalWrite(Sari,HIGH);
 delay(10000);
 digitalWrite(Kirmizi,LOW);
 digitalWrite(Sari,LOW);
 delay(2000);
 digitalWrite(Yesil,HIGH);
 delay(5000);
 digitalWrite(Yesil,LOW);
 
}
