#ifndef C9C8F740_C7AC_4A78_8612_CB12F1F3EDF6
#define C9C8F740_C7AC_4A78_8612_CB12F1F3EDF6

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

extern DHT dht;
extern Servo myServo;

extern long duration;
extern float distance;

void setupSensors();
void bacaDHT();
void bacaUltrasonik();
void kontrolServoDanBuzzer();

#endif /* C9C8F740_C7AC_4A78_8612_CB12F1F3EDF6 */
