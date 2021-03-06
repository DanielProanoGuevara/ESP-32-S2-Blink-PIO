#include <Arduino.h>
#include <WS2812FX.h>
#include <driver/gpio.h>

#define LED_COUNT 1
#define LED_PIN GPIO_NUM_18

WS2812FX ws2812fx = WS2812FX(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(921600);
  Serial.println("Hello from setup");

  ws2812fx.init();
  ws2812fx.setBrightness(50);
  ws2812fx.setSpeed(2000);
  ws2812fx.setMode(FX_MODE_BLINK_RAINBOW);
  ws2812fx.start();
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println("Hello from loop");
  //delay(1);
  ws2812fx.service();
}