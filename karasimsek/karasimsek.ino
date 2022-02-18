const int ledPini [] = {4,5,6,7,8,9,10,11,12,13}; 
void setup() {
  
for(int i=0; i<10;i++)    
{  
  pinMode(ledPini [i], OUTPUT); // LED pinlerini çıkış olarak tanımladık 
} 
}

void loop() {
 
 for(int i=0; i<10; i)
 {      
  digitalWrite(ledPini[i],HIGH);           
  delay(50);                                
  digitalWrite(ledPini[i],LOW);            
  }    
  for(int j=9;j>-1; j--)   
  {     
    digitalWrite(ledPini[j],HIGH);          
    delay(50);  
    digitalWrite(ledPini[j], LOW);     
 }  
}
