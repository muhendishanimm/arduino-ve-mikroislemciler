int btndurum=0;
int deger=0;

void setup() {
pinMode(13 , INPUT);
pinMode(12 , OUTPUT);
pinMode(11 , OUTPUT);
pinMode(10 , OUTPUT);

}

void loop() {
  btndurum = digitalRead(13);
 if ((btndurum == HIGH) && (deger== 0))
 {
 digitalWrite(12, HIGH);
 digitalWrite(11, LOW);
 digitalWrite(10, LOW);
 deger=1; 
 delay(10);
  }
  if ( (btndurum == LOW) && (deger == 1) )

{
deger=2;
delay(10);
}
   
 
 if ((btndurum == HIGH)&&(deger==2))
 {
   digitalWrite(12, LOW);
   digitalWrite(11, HIGH);
   digitalWrite(10, LOW);
   deger=3; 
 delay(10);
   
 }
 if ( (btndurum == LOW) && (deger == 3) )

{
deger=4;
delay(10);
}
  if ((btndurum == HIGH)&&(deger==4))
 {
   digitalWrite(12, LOW);
   digitalWrite(11, LOW);
   digitalWrite(10, HIGH);
   deger=5; 
 delay(10);
   
 }
 if ( (btndurum == LOW) && (deger == 5) )

{
deger=6;
delay(10);
}

if ((btndurum == HIGH)&&(deger==6))
 {
   digitalWrite(12, LOW);
   digitalWrite(11, LOW);
   digitalWrite(10, LOW);
   deger=7; 
 delay(10);
  
 }
 if ( (btndurum == LOW) && (deger == 7) )

{
deger=0;
delay(10);
}
}

