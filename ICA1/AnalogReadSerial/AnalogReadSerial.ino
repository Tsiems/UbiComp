// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin A3:
  int sensorValue = analogRead(A3);
  // print out the value you read:
  Serial.write(new_val);
  delay(100); // delay in between reads for stability
}
