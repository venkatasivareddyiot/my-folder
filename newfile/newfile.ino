int i,j,k,l;
int sensor=A0;
int sensorvalue;
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(sensor,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  Serial.begin(9600);
  digitalWrite(13,HIGH);
}
void loop()
{
  j=digitalRead(8);
  sensorvalue=analogRead(sensor);
  Serial.println(j);
  delay(1000);
  if(sensorvalue>350)
  {
  if(j==1)
  {
   k=digitalRead(8);
   if(k==0)
   {
    l=l+1;
    Serial.print("l");
    Serial.println(l);
   }
   while(j>0)
   {
    delay(100);
    i=i+1;
    delay(100);
    Serial.print("i");
    Serial.println(i);
    if(i==30)
    {
      digitalWrite(13,LOW);
    }
    j=digitalRead(8);
    }
    i=0;
    Serial.print(i);
  }
  }
}
