#define Pot A0
#define DC 3
#define Kirmizi 5
#define Sari 6
#define Yesil 7

void setup() {

  pinMode(Kirmizi,OUTPUT);
  pinMode(Sari,OUTPUT);
  pinMode(Yesil,OUTPUT);
  pinMode(DC, OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
   float potdeger = analogRead(Pot);
   potdeger = map(potdeger,0,1023,0,255);

   analogWrite(DC,potdeger);

   Serial.println(potdeger);

   if(potdeger<105){
    digitalWrite(Kirmizi,LOW);
    digitalWrite(Sari,LOW);
    digitalWrite(Yesil,LOW);
   }

   if(potdeger>=105 && potdeger < 155){
    digitalWrite(Kirmizi,LOW);
    digitalWrite(Sari,LOW);
    digitalWrite(Yesil,HIGH);
    
   }

   if(potdeger>=155 && potdeger < 205){
    digitalWrite(Kirmizi,LOW);
    digitalWrite(Sari,HIGH);
    digitalWrite(Yesil,LOW);
    
   }

   if(potdeger>=205 && potdeger < 255){
    digitalWrite(Kirmizi,HIGH);
    digitalWrite(Sari,LOW);
    digitalWrite(Yesil,LOW);
    
   }



   

}
