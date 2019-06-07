int ldr;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  ldr=analogRead(A0);
  Serial.print("LDR value:");
  Serial.println(ldr);
  int mv=map(ldr,0,1024,0,255);
  Serial.print("mapped ldr value:");
  Serial.print(mv);
  analogWrite(D2,mv);
  delay(500);
  
}
