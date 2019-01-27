 char p;
 void setup()
{
  Serial.begin(9600);
 
}
void loop()
{
  while (Serial.available()==0) { //wait for user input
}
 
p=Serial.read(); //read user input into pos
    if(p=='F')
    {  
      Serial.println("ROBOT FORWARD");   
     
    }
    if(p=='B')
    {
        Serial.println("ROBOT BACKWARD");
        
    }
      if(p=='L')
    {
       Serial.println("ROBOT LEFT");
       
     
    }
    if(p=='R')
    {
      Serial.println("ROBOT RIGHT");
      
    }
     if(p=='S')
    {
      Serial.println("STOP");
      
    }
    else{
      Serial.println(p);
    }
  }



