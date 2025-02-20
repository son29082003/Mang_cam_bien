#include <Arduino.h>
#include <MQUnifiedsensor.h>

#define Pin 34    
#define Threshold 3100

void setup() {
    Serial.begin(115200);
    pinMode(Pin, INPUT);
}

void loop() {
    int adcValue = analogRead(Pin);
    if (adcValue > Threshold) {
        Serial.println("Cảnh báo: Có khí gas!");
    } else {
        Serial.println("Không có khí gas.");
    }
    delay(1000);
}

