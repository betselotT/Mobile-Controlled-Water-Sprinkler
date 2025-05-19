Mobile Controlled Water Sprinkler

Project Overview

The Mobile Controlled Water Sprinkler is an IoT-based embedded system designed to automate irrigation. Developed by Group 3 of the Software Engineering Department at Addis Ababa Science and Technology University, this project integrates an ESP32 microcontroller, a soil moisture sensor, a relay module, and a water pump to enable remote irrigation control and real-time soil moisture monitoring via the Blynk IoT platform. The system promotes water conservation, reduces manual effort, and serves as an educational tool for embedded systems.

Course: Embedded Systems (SWEG4102)Section: BSubmission Date: May 19, 2025Instructor: Inst. Kassahun

Group Members

Betselot Tesfa (ETS0327/14)
Bezawit Edilu (ETS0334/14)
Biruk Lemma (ETS0368/14)
Diana Luel (ETS0490/14)
Etsub Girma (ETS0563/14)
Eyerusalem Rufael (ETS0572/14)
Frezer Metasebia (ETS0679/14)

Features

Real-Time Monitoring: Displays soil moisture levels on the Blynk app.
Remote Control: Activates/deactivates the water pump via a mobile app.
Water Efficiency: Ensures precise irrigation to minimize wastage.
User-Friendly: Intuitive Blynk interface for all users.
Cost-Effective: Built with affordable components (~$20–30).

Hardware Components

ESP32 Microcontroller: Processes data and communicates with Blynk.
Soil Moisture Sensor: Measures soil moisture (connected to pin 34).
Relay Module: Controls the water pump (connected to pin 25).
Water Pump: Delivers water through a pipe.
Diode (1N4007): Protects the circuit.
LEDs: Indicate Blynk connection and pump status.
Jumper Wires, Board, Charger Cables: Facilitate connections and power.

Software Requirements

Blynk IoT Platform: Mobile app for control and monitoring.
Arduino IDE: For uploading C++ code to the ESP32.
Libraries: WiFi.h, BlynkSimpleEsp32.h (install via Arduino IDE).

Setup Instructions

Hardware Assembly:
Connect the moisture sensor to ESP32 pin 34, 3.3V, and GND.
Wire the relay to pin 25, 5V, and GND; add a diode across the coil.
Connect the pump to the relay’s NO and COM terminals; use a separate 5V/12V power supply.
Attach LEDs to pins 26 (green) and 27 (red) with 220Ω resistors.
Mount components on a board using jumper wires.

Software Setup:
Install Arduino IDE and add ESP32 board support.
Install WiFi.h and BlynkSimpleEsp32.h libraries.
Configure Blynk app with template ID TMPL2ihnFXNk\_, template name Etsub Girma, and auth token FguC77R1Avib6uoY6HkFGS_fAJvQYpWm.
Add a Button widget (V0) for pump control and a Gauge widget (V1) for moisture display.

Code Upload:
Open sprinkler.ino in Arduino IDE.
Update Wi-Fi credentials (ssid and pass) in the code.
Upload the code to the ESP32 via USB.

Repository Contents

sprinkler.ino: C++ Arduino code for the ESP32.
Mobile_Controlled_Water_Sprinkler_Documentation.pdf: Comprehensive project documentation.
README.md: This file, providing project overview and setup.

How to Run

Assemble the hardware as described.
Configure and upload the Arduino code.
Open the Blynk app, connect to the project, and use the Button to control the pump and Gauge to monitor moisture.

Documentation
For detailed information, refer to Mobile_Controlled_Water_Sprinkler_Documentation.pdf in this repository. It includes project objectives, design, implementation, results, and more.
