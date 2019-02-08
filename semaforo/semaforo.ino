  
  int ledrosso1 = 7;
  int ledgiallo1 = 6;
  int ledverde1 = 5;
  int ledrosso2 = 4;
  int ledgiallo2 = 3;
  int ledverde2 = 2;
  int n1;
  int n2;
  int n3;
void setup(){
  Serial.begin(9600);
  pinMode(ledrosso1, OUTPUT);
  pinMode(ledrosso2, OUTPUT);
  pinMode(ledgiallo1, OUTPUT);
  pinMode(ledgiallo2, OUTPUT);
  pinMode(ledverde1, OUTPUT);
  pinMode(ledverde2, OUTPUT);
  
  
    Serial.println("inserisci un tempo per il led rosso");
    while(Serial.available() == 0){}
    n1 = Serial.readString().toInt();
    Serial.println("Input 1 eseguito");

    Serial.println("inserisci un secondo tempo per il led giallo");
    while(Serial.available() == 0){}
    n2 = Serial.readString().toInt();
    Serial.println("Input 2 eseguito");

    Serial.println("inserisci un terzo tempo per il lampeggio del led verde");
    while(Serial.available() == 0){}
    n3 = Serial.readString().toInt();
    Serial.println("Input 2 eseguito");
  }
  
  void coso(void){
    
  }
 
 
  
  
  

  


void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(ledrosso1,HIGH);
 digitalWrite(ledverde2, HIGH);
 delay(n2);
 
 digitalWrite(ledverde2, LOW);
 delay(n3);
 digitalWrite(ledverde2, HIGH);
 delay(n3);
 digitalWrite(ledverde2, LOW);
 delay(n3);
 digitalWrite(ledverde2, HIGH);
 delay(n3);
 digitalWrite(ledverde2, LOW);
 delay(n3);
 digitalWrite(ledverde2, HIGH);
 delay(n3);
 digitalWrite(ledverde2, LOW);
 delay(n3);
 digitalWrite(ledverde2, HIGH);
 delay(n3);
 digitalWrite(ledverde2, LOW);
 delay(n3);
 
 digitalWrite(ledrosso1,HIGH);
 digitalWrite(ledgiallo1, HIGH);
 digitalWrite(ledgiallo2, HIGH);
 delay(n2);
 digitalWrite(ledrosso1,LOW);
 digitalWrite(ledgiallo1, LOW);
 digitalWrite(ledgiallo2, LOW);
 digitalWrite(ledrosso2, HIGH);
 digitalWrite(ledverde1, HIGH);
 delay(n2);

 digitalWrite(ledverde1, LOW);
 delay(n3);
 digitalWrite(ledverde1, HIGH);
 delay(n3);
 digitalWrite(ledverde1, LOW);
 delay(n3);
 digitalWrite(ledverde1, HIGH);
 delay(n3);
 digitalWrite(ledverde1, LOW);
 delay(n3);
 digitalWrite(ledverde1, HIGH);
 delay(n3);
 digitalWrite(ledverde1, LOW);
 delay(n3);
 digitalWrite(ledverde1, HIGH);
 delay(n3);
 digitalWrite(ledverde1, LOW);
 delay(n3);
 digitalWrite(ledrosso1,LOW);
 digitalWrite(ledrosso2,HIGH);
 digitalWrite(ledgiallo1, HIGH);
 digitalWrite(ledgiallo2, HIGH);
 delay(n2);
 digitalWrite(ledrosso2,LOW);
 digitalWrite(ledgiallo1,LOW);
 digitalWrite(ledgiallo2,LOW);
 digitalWrite(ledverde2,HIGH);
 digitalWrite(ledrosso1, HIGH);
 //FIN
 
 
}
