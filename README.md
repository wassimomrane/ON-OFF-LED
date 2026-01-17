# ON-OFF-LED
This mini project demonstrates how to control an LED using an ESP32 board and the Blynk mobile application.  
The ESP32 connects to a WiFi network and receives commands from the Blynk app to turn the LED on or off in real time.

---

## Project Description

The ESP32 is programmed using the Arduino IDE and communicates with the Blynk platform over WiFi.  
A button widget in the Blynk application sends commands to the ESP32, which controls the LED connected to one of its GPIO pins.

This project is intended as a beginner-friendly introduction to IoT and remote device control.

---

## Hardware Requirements

- ESP32 development board  
- LED  
- 220Ω resistor  
- Connecting wires  

---

## Hardware Connections

| Component | ESP32 Pin |
|---------|----------|
| LED Anode (+) | GPIO 2 (through resistor) |
| LED Cathode (−) | GND |

Note: The GPIO pin can be changed in the code if needed.

---

## Software and Platforms

- Arduino IDE  
- Blynk mobile application  
- Blynk library for Arduino  
- ESP32 WiFi library  

---

## Blynk App Configuration

1. Create a new project in the Blynk app.
2. Select ESP32 as the device.
3. Add a Button widget.
4. Set the Button mode to Switch.
5. Assign the Button to Virtual Pin V0.
6. Copy the following credentials from Blynk:
   - Template ID
   - Template Name
   - Auth Token

---

## Installation and Setup

1. Clone or download this repository.
2. Open the project in Arduino IDE.
3. Install the Blynk library using the Library Manager.
4. Update the following parameters in the code:
   ```cpp
   #define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
   #define BLYNK_TEMPLATE_NAME "LED Control"
   #define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

   char ssid[] = "YOUR_WIFI_NAME";
   char pass[] = "YOUR_WIFI_PASSWORD";
