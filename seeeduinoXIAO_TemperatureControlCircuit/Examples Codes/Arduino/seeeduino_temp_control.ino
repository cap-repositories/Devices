#include <math.h>

const float v33 = 3.31; //voltage at 3.3V in the arduino XIAO
const float R1 = 4700; //resistance at R1 in the circuit

double temperature(double resistance){ //return temperature in celsius
  //temperature is calculated using Steinhart–Hart equation with B parameter form
  double t = log(resistance/100000); //100000 is the resistance at T0=25 celsius
  t = t/3950+1/298.15; //3950 is the B parameter of the NTC and 298.15 kelvin == 25 celsius is the reference temperature
  return 1/t-273.15; //convert kelvin to celsius
}

double voltage_to_resistance(double v){//return the resistance given a voltage
 return  (v*R1)/(v33-v);
}

int t = 100;

void setup() {
  analogReadResolution(12);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(3, OUTPUT); //
  SerialUSB.begin(9600);
}

void loop() {
  
  //delay(10);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  //SerialUSB.println(String(reference,2));
  delay(1000-t);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  float voltage = analogRead(A2)*v33/4096;
  SerialUSB.println(temperature(voltage_to_resistance(voltage)));
  delay(t);                       // wait for a second
  //delay(100);
}
