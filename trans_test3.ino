#include <Keypad.h>

int transmit = 12; 

const byte rows = 4;
const byte cols = 3;

char keys[rows][cols] = {

  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'} 
};

byte rowPins[rows] = {11, 10, 9, 8};
byte colPins[cols] = {7, 6, 5};

Keypad myKeypad = Keypad(makeKeymap(keys), rowPins, colPins, rows, cols);

void setup()
{
  pinMode(transmit, OUTPUT);

  
}



void zero()
{
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);

  digitalWrite(transmit, LOW);
}

void one()
{
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, LOW);

  
  
}

void two()
{
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);

  digitalWrite(transmit, LOW);
  
}

void three()
{
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, LOW);
}

void four()
{
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);

  digitalWrite(transmit, LOW);
}

void five()
{
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, LOW);
}

void six()
{
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);

  digitalWrite(transmit, LOW);
}

void seven()
{
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, LOW);
}

void eight()
{
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);

  digitalWrite(transmit, LOW);
}

void nine()
{
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, LOW);
}

void star()
{
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);

  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);

  digitalWrite(transmit, LOW);
  
}

void hash()
{
  digitalWrite(transmit, HIGH);
  delay(100);
  
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);

  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, LOW);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);
  digitalWrite(transmit, HIGH);
  delay(100);

  digitalWrite(transmit, LOW);
}


void loop()
{

  int val = Serial.read();
  char key = myKeypad.getKey();

  if(key == '1')
  {
    one();
  }

  else if(key == '2')
  {
    two();
  }

  else if(key == '3')
  {
    three();
  }

  else if(key == '4')
  {
    four();
  }

  else if(key == '5')
  {
    five();
  }

  else if(key == '6')
  {
    six();
  }

  else if(key == '7')
  {
    seven();
  }

  else if(key == '8')
  {
    eight();
  }

  else if(key == '9')
  {
    nine();
  }

  else if(key == '*')
  {
    star();
  }

  else if(key == '#')
  {
    hash();
  }

  else if(key == '0')
  {
    zero();
  }
}





