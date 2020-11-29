const int sensor_pin = 1;

void setup() {
}

void loop() {
  int val = analogRead(sensor_pin);
  Serial.println(val);
}
