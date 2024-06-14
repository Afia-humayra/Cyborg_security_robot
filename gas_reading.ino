void gas_reading() {
  gasValue = analogRead(SensorPin);
  gasValue = map(gasValue, 0, 4095, 0, 100);
  Serial.print("Gas value: ");
  Serial.println(gasValue);
  if (gasValue > GAS_THRESHOLD && GasAlarm == 0) {
    GasAlarm = 1;
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(FanPin, HIGH);
    Blynk.logEvent("gas_alert", "Gas Leakage Detected");
  

  }

  else if(gasValue < GAS_THRESHOLD && GasAlarm == 1) {
    GasAlarm = 0;
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
    digitalWrite(FanPin, LOW);
  }

}
