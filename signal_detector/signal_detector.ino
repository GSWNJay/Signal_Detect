#define LED 13


void setup() {
  pinMode(LED, OUTPUT):
  Serial.begin(9600):
}

void loop() {
  if(Serial.available() > 0 ){
char receiv = Serial.read();
if ( receiv == "x"){ // If signal is received
  digitalWire(LED, HIGH);

}else{
digitalWrite(LED, HIGH);

    }
  }
}
