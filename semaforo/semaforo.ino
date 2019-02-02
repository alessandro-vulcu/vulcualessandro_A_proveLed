  int ledrosso1 = 6;
  int ledgiallo = 5;
  int ledverde1 = 4;
  int ledrosso2 = 3;
  int ledverde2 = 2;

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
 delay(5000);
 digitalWrite(ledverde2,LOW);
 delay(1000);
 digitalWrite(ledverde2,HIGH); //1
 delay(1000);
 digitalWrite(ledverde2,LOW);
 delay(1000);
 digitalWrite(ledverde2,HIGH); //2
 delay(1000);
 digitalWrite(ledverde2,LOW);
 delay(1000);
 digitalWrite(ledverde2,HIGH); //3
 delay(1000);
 digitalWrite(ledverde2,LOW);
 delay(1000);
 digitalWrite(ledverde2,HIGH); //4
 delay(1000);
 digitalWrite(ledrosso2,HIGH);
 
 digitalWrite(ledgiallo,HIGH);
 delay(5000);
 
 digitalWrite(ledrosso1,LOW);
 digitalWrite(ledrosso2,LOW);
 digitalWrite(ledgiallo,LOW);
 digitalWrite(ledverde1, HIGH);
 delay(5000);
 digitalWrite(ledverde1,LOW);
 delay(1000);
 digitalWrite(ledverde1,HIGH); //1
 delay(1000);
 digitalWrite(ledverde1,LOW);
 delay(1000);
 digitalWrite(ledverde1,HIGH); //2
 delay(1000);
 digitalWrite(ledverde1,LOW);
 delay(1000);
 digitalWrite(ledverde1,HIGH); //3
 delay(1000);
 digitalWrite(ledverde1,LOW);
 delay(1000);
 digitalWrite(ledverde1,HIGH); //4
 delay(1000);
 digitalWrite(ledverde1,LOW);
 digitalWrite(ledgiallo,HIGH);
 delay(5000);
 digitalWrite(ledgiallo,LOW);
 digitalWrite(ledrosso1,HIGH);
}
