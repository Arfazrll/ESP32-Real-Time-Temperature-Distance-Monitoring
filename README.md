# 🌡️ ESP32 Real-Time Temperature and Distance Monitoring

**ESP32 Real-Time Temperature and Distance Monitoring** is a microcontroller-based application that uses an **ESP32** to monitor and display real-time **temperature**, **humidity**, and **distance** data. The app uses a **DHT22** sensor to measure temperature and humidity, and an **Ultrasonic sensor** (HC-SR04) to measure the distance to nearby objects. A **servo motor** is used to indicate proximity, and a **buzzer** activates for alerts when objects are too close.

---
<br>

## ✨ Key Features 
**🌡️ Real-Time Temperature and Humidity Monitoring**  
  Displays temperature and humidity values measured by the **DHT22** sensor.

**📏 Distance Measurement**  
  The app measures the distance of nearby objects using the **HC-SR04 Ultrasonic sensor**.

**🔔 Buzzer Alerts**  
  The app activates a **buzzer** when an object is detected within a specific distance (e.g., 20 cm or less).

**🎮 Servo Motor Control**  
  The servo motor rotates when the distance is less than a set threshold, providing visual feedback.

**📡 Real-Time Serial Output**  
  The data is continuously printed in the **Serial Monitor** for real-time monitoring.

---
<br>

## 🛠️ Technologies Used

- **C++**: For programming the ESP32 and implementing the application logic.
- **Arduino IDE**: Used for developing and uploading the code to the ESP32.
- **DHT22**: A temperature and humidity sensor.
- **HC-SR04**: An ultrasonic distance sensor.
- **ESP32Servo Library**: For controlling the servo motor.
- **Adafruit Sensor Library**: For working with the DHT22 sensor.
- **Arduino Serial Monitor**: To display the real-time data.

---
<br>

## 🚀 How to Use

### 1. Clone the Repository

```bash
git clone https://github.com/yourusername/ESP32-Real-Time-Temperature-Distance-Monitoring.git
cd ESP32-Real-Time-Temperature-Distance-Monitoring
```

### 2. Install Dependencies

Make sure the following libraries are installed in your Arduino IDE:

- **Adafruit Unified Sensor**
- **DHT Sensor Library**
- **ESP32Servo**

You can install these libraries via the **Library Manager** in Arduino IDE.

### 3. Upload the Code

1. Open the `main.ino` file in Arduino IDE.
2. Select the correct **ESP32 board** and **port**.
3. Upload the code to your ESP32.

### 4. Connect the Hardware

Ensure that the following components are connected to your ESP32:

| Component             | ESP32 Pin |
|-----------------------|-----------|
| DHT22 Data Pin        | GPIO 4    |
| Ultrasonic TRIG Pin   | GPIO 5    |
| Ultrasonic ECHO Pin   | GPIO 18   |
| Servo Motor Signal    | GPIO 21   |
| Buzzer Signal         | GPIO 19   |

### 5. Open the Serial Monitor

Once the upload is complete, open the **Serial Monitor** in Arduino IDE to view real-time data.

---
<br>

## 📊 Interface Overview

- **Temperature & Humidity**: Real-time temperature (°C) and humidity (%) data displayed via the Serial Monitor.
- **Distance Measurement**: The distance to nearby objects is measured in cm using the ultrasonic sensor and printed in the Serial Monitor.
- **Servo Motor**: The servo rotates based on the distance measurement. If the distance is below a threshold (e.g., 20 cm), the servo moves to 90° and the buzzer activates.

---
<br>

## 📝 Conclusion

**ESP32 Real-Time Temperature and Distance Monitoring** is a simple yet effective project that demonstrates the integration of sensors and actuators with the ESP32. This project allows users to monitor and interact with environmental data in real-time, making it a great starting point for IoT and sensor-based applications.

---
<br>

## Acknowledgments

- **Adafruit** for the DHT22 sensor library.
- **Arduino** for providing the platform and community resources.
- **ESP32 community** for continuous support and development.

---
