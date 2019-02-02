  int ledrosso1 = 6;
  int ledgiallo = 5;
  int ledverde1 = 4;
  int ledrosso2 = 3;
  int ledverde2 = 2;
  int duecinquanta = 250;
  int mille = 1000;
  int millecinque = 1500;
  int duemila = 2000;
  
void setup() {
  // put your setup code here, to run once:
  pinMode(ledrosso1, OUTPUT);
  pinMode(ledgiallo, OUTPUT);
  pinMode(ledverde1, OUTPUT);
  pinMode(ledrosso2, OUTPUT);
  pinMode(ledverde2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(ledrosso1,HIGH);
 digitalWrite(ledverde2,HIGH);
 delay(millecinque);
 digitalWrite(ledverde2,LOW);
 delay(duecinquanta);
 digitalWrite(ledverde2,HIGH); //1
 delay(duecinquanta);
 digitalWrite(ledverde2,LOW);
 delay(duecinquanta);
 digitalWrite(ledverde2,HIGH); //2
 delay(duecinquanta);
 digitalWrite(ledverde2,LOW);
 delay(duecinquanta);
 digitalWrite(ledverde2,HIGH); //3
 delay(duecinquanta);
 digitalWrite(ledverde2,LOW);
 delay(duecinquanta);
 digitalWrite(ledverde2,HIGH); //4
 delay(duecinquanta);
 digitalWrite(ledverde2, LOW);
 digitalWrite(ledrosso2,HIGH);
 
 digitalWrite(ledgiallo,HIGH);
 delay(duemila);
 
 digitalWrite(ledrosso1,LOW);
 digitalWrite(ledgiallo,LOW);
 digitalWrite(ledverde1, HIGH);
 delay(duemila);
 digitalWrite(ledverde1,LOW);
 delay(duecinquanta);
 digitalWrite(ledverde1,HIGH); //1
 delay(duecinquanta);
 digitalWrite(ledverde1,LOW);
 delay(duecinquanta);
 digitalWrite(ledverde1,HIGH); //2
 delay(duecinquanta);
 digitalWrite(ledverde1,LOW);
 delay(duecinquanta);
 digitalWrite(ledverde1,HIGH); //3
 delay(duecinquanta);
 digitalWrite(ledverde1,LOW);
 delay(duecinquanta);
 digitalWrite(ledverde1,HIGH); //4
 delay(duecinquanta);
 digitalWrite(ledverde1,LOW);
 digitalWrite(ledgiallo,HIGH);
 delay(duemila);
 digitalWrite(ledgiallo,LOW);
 digitalWrite(ledrosso1,HIGH);
 digitalWrite(ledrosso2,LOW);
}
