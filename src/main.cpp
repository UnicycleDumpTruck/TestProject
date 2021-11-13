#include <Arduino.h>

#define LED_PIN 13

void ledSetup();
void ledOn();
void ledOff();
void wait();

void setup()
{
  ledSetup();
}

void loop()
{
  ledOn();
  wait();
  ledOff();
}

void ledSetup()
{
  pinMode(LED_PIN, OUTPUT);
}

void ledOn()
{
  digitalWrite(LED_PIN, HIGH);
}

void ledOff()
{
  digitalWrite(LED_PIN, LOW);
}

void wait()
{
  delay(500);
}