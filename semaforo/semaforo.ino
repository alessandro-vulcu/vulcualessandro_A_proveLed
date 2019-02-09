  
  int ledrosso1 = 7;
  int ledgiallo1 = 6;
  int ledverde1 = 5;
  int ledrosso2 = 4;
  int ledgiallo2 = 3;
  int ledverde2 = 2;
  int n1;
  int n2;
  int n3;
  int n4;
  int totale;
void setup(){
  Serial.begin(9600);
  pinMode(ledrosso1, OUTPUT);
  pinMode(ledrosso2, OUTPUT);
  pinMode(ledgiallo1, OUTPUT);
  pinMode(ledgiallo2, OUTPUT);
  pinMode(ledverde1, OUTPUT);
  pinMode(ledverde2, OUTPUT);

  durata();
  tempo1();
  lampeggio();
  nlampeggi();

  }
  
  void durata(){
    Serial.println("Inserisci la durata del semaforo in millisecondi");
    while(Serial.available() == 0){}
    n1 = Serial.readString().toInt();
    Serial.println(n1);
  }
  void tempo1(){
    Serial.println("Inserisci il tempo tra l'accensione di un led e l'altro");
    while(Serial.available() == 0){}
    n2 = Serial.readString().toInt();
    Serial.println(n2);
  }
  void lampeggio(){
    Serial.println("Inserisci un tempo per il lampeggio del led verde");
    while(Serial.available() == 0){}
    n3 = Serial.readString().toInt();
    Serial.println(n3);
  }
  void nlampeggi(){
    Serial.println("Inserisci il numero di lampeggi che i led verdi devono fare");
    while(Serial.available() == 0){}
    n4 = Serial.readString().toInt();
    Serial.println(n4);
    totale = n2 + (n3*n4);
    errore();
  }
  
  void errore(){
    if (totale < n1){
      Serial.println("ERRORE, la durata del semaforo è minore di quella che hai impostato");
      durata();
      tempo1();
      lampeggio();
      nlampeggi();
      errore();
    }
    else if(totale > n1){
      Serial.println("ERRORE, la durata del semaforo è maggiore di quella che hai impostato");
      durata();
      tempo1();
      lampeggio();
      nlampeggi();
      errore();
    }
    else{
      Serial.println("INIZIA!");
    }
  }
  
 void fase1(){
  digitalWrite(ledrosso2,LOW);
  digitalWrite(ledgiallo1,LOW);
  digitalWrite(ledgiallo2,LOW);
  digitalWrite(ledrosso1,HIGH);
  digitalWrite(ledverde2,HIGH);
  delay(n2);
 }
 
 void fase2(){
  for(int i = 0; i < n4; i++){
    digitalWrite(ledverde2,LOW);
    delay(n3);
    digitalWrite(ledverde2,HIGH);
    delay(n3);  
  }
 }
 
 void fase3(){
  digitalWrite(ledverde2,LOW);
  digitalWrite(ledgiallo1,HIGH);
  digitalWrite(ledgiallo2,HIGH);
  delay(n2);
 }
 
 void fase4(){
  digitalWrite(ledrosso1,LOW);
  digitalWrite(ledgiallo1,LOW);
  digitalWrite(ledgiallo2,LOW);
  digitalWrite(ledrosso2,HIGH);
  digitalWrite(ledverde1,HIGH);
  delay(n2);
 }
 
 void fase5(){
  for(int k = 0; k < n4; k++){
    digitalWrite(ledverde1,LOW);
    delay(n3);
    digitalWrite(ledverde1,HIGH);
    delay(n3);  
  }
 }
 
 void fase6(){
  digitalWrite(ledverde1,LOW);
  digitalWrite(ledgiallo1,HIGH);
  digitalWrite(ledgiallo2,HIGH);
  delay(n2);
 }

void loop() {
  // put your main code here, to run repeatedly:

 
 fase1();
 fase2();
 fase3();
 fase4();
 fase5();
 fase6();
 
 
 //FIN
 
 
}
