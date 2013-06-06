int ghost = 5;
int val = 0;

void setup() {                
  
  Serial.begin(9600);
  pinMode(ghost, OUTPUT); 
  
}

void loop() {
 
  int val = 130;
  SendCommand(val);
  
  delay(5000); 
  
}

void InitSend(){
  int j = 0;
  for(j = 0; j < 3; j++){
    digitalWrite(ghost, HIGH);
    delay(70);
    digitalWrite(ghost, LOW);
    delay(70); 
  }   
}

void SendCommand(int v1){
  Serial.println("SendCommand");
  InitSend();
  Serial.println(v1);

  digitalWrite(ghost, HIGH);
  delay(v1);

  digitalWrite(ghost, LOW);
  delay(70);  
  Serial.println("End SendCommand");
}
