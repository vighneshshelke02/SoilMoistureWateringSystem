# 🌱 Soil Moisture and Automatic Watering System using Arduino Uno

This project is an automatic plant watering system built using an Arduino Uno. It reads soil moisture levels using a sensor and turns on a water pump when the soil is dry, helping maintain optimal moisture for plant health.

## 🧰 Components Used
- Arduino Uno
- Soil Moisture Sensor
- Relay Module
- Water Pump (or motor)
- Jumper Wires
- Breadboard
- Power Supply

## ⚙️ How It Works
1. The soil moisture sensor detects the moisture level in the soil.
2. If the value is below a set threshold, the Arduino triggers the relay module.
3. The relay turns on the pump to water the plant.
4. Once the soil moisture is above the threshold, the pump automatically turns off.


## 🧠 Code
The logic is written in `SoilMoistureWateringSystem.ino`. You can tweak the threshold value to adjust the soil dryness sensitivity.

## 🚀 Future Improvements
- Add an LCD to display moisture levels.
- Use a DHT11 sensor to monitor temperature and humidity.
- Connect to IoT platforms like Blynk or ThingSpeak for remote monitoring.

---


---

## 📜 License
This project is open-source and free to use for learning and hobby purposes.

