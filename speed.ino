
float  start,last;
int elapsed;
int lastbuttonstate=LOW;

void setup()
{
  pinMode(13,INPUT);

  for(int i=0;i<=12;i++)
    pinMode(i,OUTPUT);

  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);

  Serial.begin(19200);
  start=millis();
}



void loop()
{ 
  int r1,r2,r3;
  int elapsed1,elapsed2,elapsed3;
  int curbuttonstate=digitalRead(13);
  if(lastbuttonstate==LOW && curbuttonstate==HIGH)
  {
    last=millis();
    elapsed=int(5760/(last-start));
    start=last;
  }
  lastbuttonstate=curbuttonstate;
  Serial.println("elapsed=");
  Serial.println(elapsed);
  delay(5);

  r1=elapsed%10;
  elapsed1=elapsed/10;
  Serial.println("r1=");
  Serial.println(r1);
  delay(5);

  switch(r1)
  {
  case 0:
    zero1();
    break;
  case 1:
    one1();
    break;
  case 2:
    two1();
    break;
  case 3:
    three1();
    break;
  case 4:
    four1();
    break;
  case 5:
    five1();
    break;
  case 6:
    six1();
    break;
  case 7:
    seven1();
    break;
  case 8:
    eight1();
    break;
  case 9:
    nine1();
    break;
  }

  r2=elapsed1%10;
  elapsed2=elapsed1/10;
  Serial.println("r2=");
  Serial.println(r2);

  switch(r2)
  {
  case 0:
    zero2();
    break;
  case 1:
    one2();
    break;
  case 2:
    two2();
    break;
  case 3:
    three2();
    break;
  case 4:
    four2();
    break;
  case 5:
    five2();
    break;
  case 6:
    six2();
    break;
  case 7:
    seven2();
    break;
  case 8:
    eight2();
    break;
  case 9:
    nine2();
    break;
  }

  r3=elapsed2%10;
  elapsed3=elapsed2/10;
  Serial.println("r3=");
  Serial.println(r3);

  switch(r3)
  {
  case 0:
    zero3();
    break;
  case 1:
    one3();
    break;
  }

}


//---------------------------------------------------------------

void zero1()
{
  analogWrite(A2,0);
  analogWrite(A3,0);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
}

void one1()
{
  analogWrite(A3,0);
  digitalWrite(4,LOW);
  analogWrite(A2,255);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
}

void two1()
{
  analogWrite(A2,0);
  analogWrite(A3,0);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
}

void three1()
{
  analogWrite(A2,0);
  analogWrite(A3,0);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(6,HIGH);
}

void four1()
{
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  analogWrite(A3,0);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  analogWrite(A2,255);

}

void five1()
{
  analogWrite(A2,0);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  analogWrite(A3,255);
}

void six1()
{
  analogWrite(A2,0);
  digitalWrite(2,LOW);
  digitalWrite(6,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  analogWrite(A3,255);
}

void seven1()
{
  analogWrite(A2,0);
  analogWrite(A3,0);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
}

void eight1()
{
  for(int i=2;i<7;i++)
    digitalWrite(i,LOW);
  analogWrite(A3,0);
  analogWrite(A2,0);
}

void nine1()
{
  analogWrite(A2,0);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  analogWrite(A3,0);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,HIGH);

}

//------------------------------------------------------------------


void zero2()
{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(7,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  analogWrite(A0,0);
  digitalWrite(10,HIGH);
}

void one2()
{
  digitalWrite(7,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  analogWrite(A0,255);
}

void two2()
{
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  analogWrite(A0,0);
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
}

void three2()
{
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(9,HIGH);
  analogWrite(A0,255);
}

void four2()
{
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(7,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(12,HIGH);
  analogWrite(A0,255);

}

void five2()
{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(7,HIGH);
  analogWrite(A0,255);
}

void six2()
{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  analogWrite(A0,0);
  digitalWrite(7,HIGH);
}

void seven2()
{
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(11,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  analogWrite(A0,255);
}

void eight2()
{
  for(int i=7;i<13;i++)
    digitalWrite(i,LOW);
  analogWrite(A0,0);
}

void nine2()
{
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(7,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  analogWrite(A0,255);

}

//-------------------------------------------------------

void one3()
{
  analogWrite(A1,0);
}

void zero3()
{
  analogWrite(A1,255);
}










