  int ledrosso1 = 7;
  int ledgiallo1 = 6;
  int ledverde1 = 5;
  int ledrosso2 = 4;
  int ledgiallo2 = 3;
  int ledverde2 = 2;
  int duecinquanta = 250;
  int mille = 1000;
  int trecinque = 3500;
  int duemila = 2000;
  
void setup() {
  // put your setup code here, to run once:
  pinMode(ledrosso1, OUTPUT);
  pinMode(ledgiallo1, OUTPUT);
  pinMode(ledverde1, OUTPUT);
  pinMode(ledrosso2, OUTPUT);
  pinMode(ledgiallo2, OUTPUT);
  pinMode(ledverde2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(ledrosso1,HIGH);
 digitalWrite(ledverde2, HIGH);
 delay(trecinque);
 
 digitalWrite(ledverde2, LOW);
 delay(duecinquanta);
 digitalWrite(ledverde2, HIGH);
 delay(duecinquanta);
 digitalWrite(ledverde2, LOW);
 delay(duecinquanta);
 digitalWrite(ledverde2, HIGH);
 delay(duecinquanta);
 digitalWrite(ledverde2, LOW);
 delay(duecinquanta);
 digitalWrite(ledverde2, HIGH);
 delay(duecinquanta);
 digitalWrite(ledverde2, LOW);
 delay(duecinquanta);
 digitalWrite(ledverde2, HIGH);
 delay(duecinquanta);
 digitalWrite(ledverde2, LOW);
 delay(duecinquanta);
 
 digitalWrite(ledrosso1,LOW);
 digitalWrite(ledgiallo1, HIGH);
 digitalWrite(ledgiallo2, HIGH);
 delay(trecinque);
 digitalWrite(ledgiallo1, LOW);
 digitalWrite(ledgiallo2, LOW);
 digitalWrite(ledrosso2, HIGH);
 digitalWrite(ledverde1, HIGH);
 delay(trecinque);

 digitalWrite(ledverde1, LOW);
 delay(duecinquanta);
 digitalWrite(ledverde1, HIGH);
 delay(duecinquanta);
 digitalWrite(ledverde1, LOW);
 delay(duecinquanta);
 digitalWrite(ledverde1, HIGH);
 delay(duecinquanta);
 digitalWrite(ledverde1, LOW);
 delay(duecinquanta);
 digitalWrite(ledverde1, HIGH);
 delay(duecinquanta);
 digitalWrite(ledverde1, LOW);
 delay(duecinquanta);
 digitalWrite(ledverde1, HIGH);
 delay(duecinquanta);
 digitalWrite(ledverde1, LOW);
 delay(duecinquanta);
 digitalWrite(ledrosso1,LOW);
 digitalWrite(ledrosso2,LOW);
 digitalWrite(ledgiallo1, HIGH);
 digitalWrite(ledgiallo2, HIGH);
 delay(trecinque);
 digitalWrite(ledgiallo1,LOW);
 digitalWrite(ledgiallo2,LOW);
 digitalWrite(ledverde2,HIGH);
 digitalWrite(ledrosso1, HIGH);
 //FIN
 
 
}
