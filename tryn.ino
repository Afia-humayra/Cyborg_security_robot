#define BLYNK_TEMPLATE_ID "TMPL640NWZO8l"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "9pZ3LhdmE1wH9zcUJHAJiEThH8RUQq6x"
#define BLYNK_PRINT Serial
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
#include <ESP32Servo.h>
Servo myservo;


#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Sayeed";
char pass[] = "01912813332";

int ledPin = 17;
int buzzerPin = 2;
int FanPin = 4;
int SensorPin = 35;
int gasValue;
int GAS_THRESHOLD = 35;
int GasAlarm = 0;
BlynkTimer timer;


BLYNK_WRITE(V5) {
  GAS_THRESHOLD = param.asInt();
  Serial.print("gasValue:  ");
  Serial.println(gasValue);
}

void myTimerEvent() {
  Blynk.virtualWrite(V2, millis() / 1000);
  Blynk.virtualWrite(V1, GasAlarm);
  Blynk.virtualWrite(V4, gasValue);
}

void setup() {
  Serial.begin(115200);
  lcd.init();
  lcd.backlight();
  lcd.clear();
  myservo.attach(5);
  pinMode(13, INPUT);
  myservo.write(0);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(FanPin, OUTPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
  timer.setInterval(1000L, myTimerEvent);
}

void loop() {

  if (digitalRead(13) == LOW) {
    myservo.write(180);
    delay(100);
    lcd.setCursor(1, 0);
    lcd.print("Rain Detected");
    Serial.print("Rain Detected");
  }

  else {
    myservo.write(90);
    lcd.setCursor(1, 0);
    lcd.print("Rain Non Detected");
  }
  Blynk.run();
  timer.run();  // Initiates BlynkTimer
  gas_reading();
}
