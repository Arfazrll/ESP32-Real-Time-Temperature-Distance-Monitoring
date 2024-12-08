#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include <ESP32Servo.h>

#define TRIG_PIN 5
#define ECHO_PIN 18
#define DHTPIN 4
#define DHTTYPE DHT22
#define BUZZER_PIN 19
#define SERVO_PIN 21

Servo myServo;           
DHT dht(DHTPIN, DHTTYPE); 

long duration;
float distance;

void setup() {
  Serial.begin(115200);
  dht.begin();

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(BUZZER_PIN, OUTPUT);

  myServo.attach(SERVO_PIN); 
  myServo.write(0);          

  Serial.println("Setup selesai!");
}

void loop() {
  bacaDHT();
  bacaUltrasonik();
  kontrolServoDanBuzzer();
  delay(1000); 
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