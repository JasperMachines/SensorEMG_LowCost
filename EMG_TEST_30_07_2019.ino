int v=A0;
int valor;

void setup() {
  Serial.begin(250000);
  
}

void loop() {
  valor= map(analogRead(v),0,1023,10000,0);
//  //valor=valor*0.004;
  Serial.println(valor);
  delay(10);
}
