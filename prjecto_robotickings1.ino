
int ft=1;
int led=4;
int valorft=0;
void setup()
{
  pinMode(13, INPUT);
 Serial.begin(9600);         

 }
 
  void loop()
 {    
 
valorft=analogRead(ft);
Serial.println(valorft); 
if(valorft<=581){
  digitalWrite(led, HIGH);
  }else{ 
   digitalWrite(led, LOW); 
   }  
 }    