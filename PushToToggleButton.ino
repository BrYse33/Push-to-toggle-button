

bool AS = false;
bool PS = false;
int button = 2;
bool buttonS;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(button, INPUT);
Serial.println("");
Serial.println("In the next lines will be the state of the ''toggle'' button");
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonS = digitalRead(button);
  if (buttonS == LOW) 
  {
    PS = true;
    AS = !AS;
    delay(1000);
  }

  if (AS == true && PS == true)
  {
    Serial.println("button HIGH");
    Serial.println("----------------");
    Serial.println("----------------");
    PS = false;
  }
  else if(AS == false && PS == true)
  {
    
    Serial.println("button LOW");
    Serial.println("----------------");
    Serial.println("----------------");
    PS = false;
  }

  

}
