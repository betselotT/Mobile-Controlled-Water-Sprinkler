#define BLYNK_TEMPLATE_ID "TMPL2ihnFXNk_"
#define BLYNK_TEMPLATE_NAME "Etsub Girma"
#define BLYNK_AUTH_TOKEN "FguC77R1Avib6uoY6HkFGS_fAJvQYpWm"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Blynk Auth and Wi-Fi credentials
char auth[] = "FguC77R1Avib6uoY6HkFGS_fAJvQYpWm";
char ssid[] = "Mobile";
char pass[] = "hotspot01";

// Define pins
#define SOIL_MOISTURE_PIN 34  // Analog input for soil sensor
#define RELAY_PIN 25          // Digital output for relay

BLYNK_WRITE(V0) {
  int relayState = param.asInt(); // 1 or 0 from Blynk button
  digitalWrite(RELAY_PIN, relayState);
}

void setup() {
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW); // Start with relay OFF

  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();

  // Read soil sensor
  int raw = analogRead(SOIL_MOISTURE_PIN);
  
  int moisturePercent = map(raw, 4095, 1500, 0, 100); // Adjust range as needed

  Serial.print("Soil Moisture: ");
  Serial.print(moisturePercent);
  Serial.println(" %");

  // Send to Blynk gauge
  Blynk.virtualWrite(V1, moisturePercent);

  delay(2000); // Update every 2 seconds
}