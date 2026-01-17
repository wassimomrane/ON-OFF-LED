#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// ----------- Blynk Credentials -----------
#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "LED Control"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

// ----------- WiFi Credentials ------------
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

// ----------- LED Pin ---------------------
#define LED_PIN 2

// ----------- Blynk Button (V0) -----------
BLYNK_WRITE(V0)
{
  int ledState = param.asInt(); // 1 or 0
  digitalWrite(LED_PIN, ledState);
}

void setup()
{
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}
