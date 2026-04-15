int E1 = 5;
int M1 = 4;
int E2 = 6;                    
int M2 = 7;      
int value=200;
char input;
void forward();
void backward();
void left();
void stop();
void right();
void setup()
{
    pinMode(M1, OUTPUT);  
    pinMode(M2, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if (Serial.available()>0)
  {
    input=Serial.read();
    if (input=='w'||input=='W')
    {
		forward();
    }
    else if (input=='s'||input=='S')
    {
		backward();
    }
    else if (input=='d'||input=='D')
    {
		right();
    }
    else if (input=='a'||input=='A')
    {
		left();
    }
    else if (input=='b'||input=='B')
    {
		stop();
    }
    else 
    {
      Serial.println("Invalid");
    }
  }
}


void forward()
  {
    digitalWrite(M1,HIGH);  
    digitalWrite(M2,HIGH);      
    analogWrite(E1, value); 
    analogWrite(E2, value);
    delay(30);
  Serial.println("w");
}
void backward()
{
    digitalWrite(M1,HIGH);  
    digitalWrite(M2,HIGH);      
    analogWrite(E1, -1*value);  
    analogWrite(E2, -1*value);
    delay(30);
    Serial.println("s");

}
void left()
{
    digitalWrite(M1,LOW);  
    digitalWrite(M2,HIGH);      
    analogWrite(E1, -1*value);   
    analogWrite(E2, value);   
    delay(30);
    Serial.println("a");

}
void right()
  {
    digitalWrite(M1,HIGH);  
    digitalWrite(M2,LOW);      
    analogWrite(E1, value);
    analogWrite(E2, -1*value);
    delay(30);
    Serial.println("d");

  }
void stop()
{
  digitalWrite(M1,LOW);  
  digitalWrite(M2,LOW);
  analogWrite(E1, 0);
    analogWrite(E2,0);
}