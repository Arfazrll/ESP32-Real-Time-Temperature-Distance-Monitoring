#include "ESP32_IoT.h"

DHT dht(DHTPIN, DHTTYPE);
Servo myServo;

long duration;
float distance;

void setupSensors() {
  dht.begin();
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  myServo.attach(SERVO_PIN);
  myServo.write(0);
}

void bacaDHT() {
  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Gagal membaca data DHT!");
  } else {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print(" °C, Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  }
}

void bacaUltrasonik() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);
  distance = (duration * 0.034 / 2);

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}

void kontrolServoDanBuzzer() {
  if (distance < 20) {
    myServo.write(90);
    digitalWrite(BUZZER_PIN, HIGH);
  } else {
    myServo.write(0);
    digitalWrite(BUZZER_PIN, LOW);
  }
}