int Led[] = {1,2,3,4,5,6}; 

void setup() {
  for(int i=0;i<6;i++){
    pinMode(Led[i],OUTPUT);
  }

  

}

void loop() {

  for(int i=0;i<6;i++){
    digitalWrite(Led[i],HIGH);
    delay(70);
    digitalWrite(Led[i],LOW);

    
  }

  for(int a=5;a>=0;a--){
    digitalWrite(Led[a],HIGH);
    delay(70);
    digitalWrite(Led[a],LOW);
    
  }

  
    
  

}
