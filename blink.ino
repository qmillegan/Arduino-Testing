void setup() {
  pinMode(13, OUTPUT);
}
void loop() {
  digitalWrite(13, HIGH);
  delay(300);             
  digitalWrite(13, LOW);   
  delay(300); 
  digitalWrite(13, HIGH);
  delay(30);
  digitalWrite(13, LOW);
  delay(3000);  
}
