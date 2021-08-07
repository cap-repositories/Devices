
int d = 200;

void setup() {
  analogReadResolution(12);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(1, INPUT); //IR
  pinMode(2, OUTPUT); //PWM fan
  pinMode(3, INPUT); // TCH fan
  SerialUSB.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  //float voltage = analogRead(A2)*3.3/4096;
  for(int i = 0; i<180; i++){
    analogWrite(2,i);
    delay(d);
    SerialUSB.println(analogRead(1));
  }
}
