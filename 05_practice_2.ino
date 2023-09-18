#define PIN_LED 7  //0이 HIGH, 1이 LOW 상태
int a;
void setup() {
  a = 0;
  pinMode(PIN_LED, OUTPUT);
}
  
void loop() {
  digitalWrite(PIN_LED, 0);
  delay(1000);
  
  while(a<5){  
  digitalWrite(PIN_LED, 1); 
  delay(100);
  digitalWrite(PIN_LED, 0);
  delay(100);
  a += 1;
  }

  digitalWrite(PIN_LED, 1);
  
  while(1){}
}
