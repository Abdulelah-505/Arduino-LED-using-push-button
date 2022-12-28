
const int LED= 8;
const int BUTTON= 5;


void setup() {
  
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}



void loop() {
  if(digitalRead(BUTTON) == HIGH){
   digitalWrite(LED, HIGH);
  }
  else{
 digitalWrite(LED, LOW);
  }                     
}
