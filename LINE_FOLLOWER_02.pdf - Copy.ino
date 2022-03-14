int ir1=3;
int ir2=4;
int m1=5;
int m2=6;
int m3=9;
int m4=10;
void setup() {
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT); 
}
void loop() {
  if(digitalRead(ir1)==LOW&&digitalRead(ir2)==LOW)
  {
    analogWrite(m1,255);
    analogWrite(m2,0);
    analogWrite(m3,255);
    analogWrite(m4,0);
  }
  else if(digitalRead(ir1)==LOW&&digitalRead(ir2)==HIGH)
  {
    analogWrite(m1,0);
    analogWrite(m2,150);
    analogWrite(m3,255);
    analogWrite(m4,0);
  } 
  else if(digitalRead(ir1)==HIGH&&digitalRead(ir2)==LOW)
  {
    analogWrite(m1,255);
    analogWrite(m2,0);
    analogWrite(m3,0);
    analogWrite(m4,150);
  } 
  else if(digitalRead(ir1)==HIGH&&digitalRead(ir2)==HIGH)
  {
    analogWrite(m1,0);
    analogWrite(m2,0);
    analogWrite(m3,0);
    analogWrite(m4,0);
  }  
  
}
