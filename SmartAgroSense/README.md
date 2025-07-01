
🌾 Smart AgroSense – IoT-Based Multi-Point Wireless Sensor System for Precision Farming

Smart AgroSense is a compact, wireless agricultural monitoring system that bridges low-power embedded systems with cloud-based IoT dashboards. 
Designed for real-time, multi-node environmental sensing, this project explores many-to-one communication using
ESP32 + nRF24L01, with Blynk IoT integration and system behavior simulation via MATLAB & Simulink.


 🔍 What It Does

✅ Monitors key soil and weather parameters:

🌡️ Temperature
💧 Humidity
🌱 Soil Moisture

✅ Wireless Data Aggregation:

3 Sensor Nodes → 1 Receiver Node
Uses custom many-to-one RF protocol
Ensures sequential, structured transmission

✅ Cloud Connectivity:

Blynk IoT dashboard for live visualization
Push notifications for low soil moisture
Remote manual motor control

✅ Local Fail-Safe Logic:

Node 3 handles auto irrigation even if cloud is offline

✅ Visualization:

Built-in 3D simulation model in Simulink
Displays live node-to-receiver data flow


🧠 Core Technologies

Embedded Systems→ESP32, Arduino IDE, C++          
 Wireless Protocol→nRF24L01 (2.4 GHz, many-to-one RF)    
Sensors→DHT22, Capacitive Soil Moisture Sensor 
IoT & Cloud→Blynk IoT Platform                     
Simulation & Design→MATLAB, Simulink, KiCad           


 📁 Folder Layout

SmartAgroSense/
├── Code/              → Arduino sketches (nodes + receiver)
├── Hardware/          → Circuit diagrams, PCB layouts
├── Simulation/        → Simulink model (.slx), screenshots
├── IoT_Dashboard/     → Blynk interface layout and config
├── Media/             → Demo images, prototype photos
├── Docs/              → Project report and presentation
└── README.md


👨‍💻 Developed By

Mayank Thakkar
📌 System Architect | Embedded Developer | IoT Integrator

Built with curiosity, problem-solving, and a passion for merging tech and agriculture 🌱


 🔗 Connect With Me
LinkedIn→www.linkedin.com/in/mayank-thakkar-6545b82a6

