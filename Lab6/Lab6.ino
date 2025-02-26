const int sensor_pin = A1;
int pulse_signal = 0;
float BPM = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pulse_signal = analogRead(sensor_pin);
  Serial.println(pulse_signal);
  delay(50);
}
