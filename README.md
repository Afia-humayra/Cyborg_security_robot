# Cyborg_security_robot

# Fire Gas Sensing Monitoring System with Rain Detection and Window Control

This project integrates a Fire Gas Sensing Monitoring System using an JRC Board and MQ2 sensor with a Blynk notification system. Additionally, it includes a water rain detection feature that automatically closes windows to prevent water damage. This comprehensive system is designed to enhance safety, environmental monitoring, and user convenience.

## Key Features

1. **Gas Detection:**
   - Utilizes MQ2 gas sensors to detect gases such as carbon monoxide and natural gas.
   - Provides real-time monitoring and alerts based on gas concentration levels.

2. **Fire Hazard Monitoring:**
   - Early detection of potential fire hazards.
   - Sends instant alerts through the Blynk app when dangerous gas levels are detected.

3. **JRC Board Microcontroller:**
   - Uses the JRC Board microcontroller for efficient processing and communication.
   - Supports Wi-Fi connectivity for remote monitoring.

4. **Blynk Notification System:**
   - Integrates with the Blynk platform for real-time remote monitoring.
   - Provides instant notifications and control via the Blynk mobile app.

5. **Alternate Safety System:**
   - Includes an exhaust fan to actively mitigate gas leaks and reduce fire risks.

6. **Adaptability and Customization:**
   - Customizable for various environments such as homes, industrial facilities, and commercial buildings.
   - Adjustable settings for different gas detection thresholds and response actions.

7. **Accessibility and Affordability:**
   - Utilizes cost-effective components to ensure the system is affordable and accessible.
   
8. **Environmental Monitoring:**
   - Monitors and logs gas concentration data over time.
   - Provides insights into gas trends and potential environmental hazards.

9. **Rain Detection Feature:**
   - Incorporates rain sensors to detect rainfall.
   - Automatically closes windows to prevent water damage when rain is detected.

10. **Versatility in Applications:**
    - Suitable for residential, commercial, and industrial applications.
    - Enhances safety and environmental monitoring in diverse settings.

11. **Real-time Alerts:**
    - Provides instant alerts via the Blynk app for gas leaks, fire hazards, and weather changes.

12. **Data Logging and Analytics:**
    - Logs historical data for analysis.
    - Contributes to data-driven insights and continuous improvement.

13. **Remote Monitoring and Control:**
    - Enables users to monitor and control the system remotely through the Blynk app.

14. **Community Integration:**
    - Can be implemented at a community level to enhance overall safety and awareness.

## Project Setup

### Hardware Components

- JRC Board Microcontroller
- MQ2 Gas Sensor
- Rain Sensor Module
- Servo Motor (for window control)
- Exhaust Fan
- Buzzer
- LED
- LCD Display
- Breadboard and Jumper Wires
- Transistor
- Power Supply

### Software Requirements

- Arduino IDE
- Blynk Library
- ESP32 Board Support Package

### Circuit Diagram

![circuit diagram wro_23_bb](https://github.com/Afia-humayra/Automation/assets/87032492/e66b8c27-274b-4db5-a6fc-335fd02f0340)

### BLYNK Dashboard
![blynk server dashboard](https://github.com/Afia-humayra/Automation/assets/87032492/a799ebd6-4438-40bc-99a9-49f1af6b399a)
![blynk warning](https://github.com/Afia-humayra/Automation/assets/87032492/6eb06d3c-5a88-4d66-a78e-8dd902a933fe)
![notifi](https://github.com/Afia-humayra/Automation/assets/87032492/6d80961e-9420-4389-8b37-9e753e2e040f)
![mobile dash](https://github.com/Afia-humayra/Automation/assets/87032492/1a1af9a1-ecb1-4723-95e9-0d6c3a9e5fb0)
![noti mobile](https://github.com/Afia-humayra/Automation/assets/87032492/58bc154a-2021-499a-8044-78b69b2db436)


### Installation and Configuration

1.   **Program the JRC Board:**  Open the tryn.ino sketch in the Arduino IDE. Upload the code to the Arduino board.

2. **Install Dependencies:**
   - Ensure you have the Arduino IDE installed.
   - Install the ESP32 Board Support Package via the Arduino IDE.
   - Install the Blynk library in the Arduino IDE.

3. **Hardware Setup:**
   - Connect the MQ2 gas sensor, rain sensor, servo motor, and exhaust fan to the JRC Board as per the circuit diagram.
   - Ensure all connections are secure and correct.

4. **Configure Blynk:**
   - Create a new project in the Blynk app.
   - Add necessary widgets (e.g., Value Display, Notifications, Buttons).
   - Obtain the Blynk Auth Token and update it in the Arduino sketch.

5. **Upload the Code:**
   - Open the Arduino sketch `tryn.ino`.
   - Update the Wi-Fi credentials and Blynk Auth Token in the sketch.
   - Upload the sketch to the JRC Board.

6. **Test the System:**
   - Power on the system and ensure all sensors and actuators are working.
   - Verify real-time data and alerts on the Blynk app.

## Usage

1. **Gas and Fire Monitoring:**
   - The system continuously monitors gas concentration levels.
   - If dangerous levels are detected, the system triggers the exhaust fan and sends an alert via Blynk.

2. **Rain Detection and Window Control:**
   - The rain sensor detects rainfall.
   - The system automatically closes windows to prevent water damage and sends a notification via Blynk.

3. **Remote Monitoring:**
   - Use the Blynk app to monitor real-time data, receive alerts, and control the system remotely.

## Contributing

We welcome contributions to enhance the system. 

