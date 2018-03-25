int receive = 8;

  int zero[] = {HIGH, LOW, LOW, HIGH, HIGH, LOW, LOW, LOW, LOW};
  int one[] = {HIGH, LOW, LOW, HIGH, HIGH, LOW, LOW, LOW, HIGH};
  int two[] = {HIGH, LOW, LOW, HIGH, HIGH, LOW, LOW, HIGH, LOW};
  int three[] = {HIGH, LOW, LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH};
  int four[] =  {HIGH, LOW, LOW, HIGH, HIGH, LOW, HIGH, LOW, LOW};
  int five[] = {HIGH, LOW, LOW, HIGH, HIGH, LOW, HIGH, LOW, HIGH};
  int six[] = {HIGH, LOW, LOW, HIGH, HIGH, LOW, HIGH, HIGH, LOW};
  int seven[] = {HIGH, LOW, LOW, HIGH, HIGH, LOW, HIGH, HIGH, HIGH};
  int eight[] = {HIGH, LOW, LOW, HIGH, HIGH, HIGH, LOW, LOW, LOW};
  int nine[] = {HIGH, LOW, LOW, HIGH, HIGH, HIGH, LOW, LOW, HIGH};
  int star[] = {HIGH, LOW, LOW, HIGH, LOW, HIGH, LOW, HIGH, LOW};
  int hash[] = {HIGH, LOW, LOW, HIGH, LOW, LOW, LOW, HIGH, HIGH};

  int y[9];
  int i;
  int x;
  
void setup()
{
  pinMode(receive, INPUT);

  Serial.begin(9600);
}

bool isEqual(int *character, int *values){
  for(int i = 0; i < 9; i++){
    if (values[i] == character[i]) {
      if (i == 8 && y[0] == HIGH){
        return true;
      }
    }
    else{
      return false;
    }
  }
}

void loop() {

  
 

  for(i = 0; i<9; i++){
    x = digitalRead(receive);
    delay(100);
    if(x == LOW || x == HIGH){
      y[i] = x;
    }
  }

  if(isEqual(y, zero)){
    Serial.println('0');
  }
  else if(isEqual(y, one)){
    
    Serial.println('1');
  }
  else if(isEqual(y, two)){
    Serial.println('2');
  }
  else if(isEqual(y, three)){
    
    Serial.println('3');
  }
  else if(isEqual(y, four)){
    Serial.println('4');
  }
  else if(isEqual(y, five)){
   Serial.println('5');
  }
  else if(isEqual(y, six)){
    Serial.println('6');
  }
  else if(isEqual(y, seven)){
    Serial.println('7');
  }
  else if(isEqual(y, eight)){
    Serial.println('8');
  }
  else if(isEqual(y, nine)){
    Serial.println('9');
  }
  else if(isEqual(y, star)){
    Serial.println('*');
  }
  else if(isEqual(y, hash)){
    Serial.println('#');
  }
}
