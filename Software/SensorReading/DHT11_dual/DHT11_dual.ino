// Example testing sketch for various DHT humidity/temperature sensors
// Written by ladyada, public domain

// REQUIRES the following Arduino libraries:
// - DHT Sensor Library: https://github.com/adafruit/DHT-sensor-library
// - Adafruit Unified Sensor Lib: https://github.com/adafruit/Adafruit_Sensor

//Tachyon
//Works with both Arduino and ESP32-S3
//Used in Reptile Terrarium to monitor humidity and temperature
//This is the walk of development. Next will implement two sensors!

#include <DHT11.h>

DHT11 dht1(4);
DHT11 dht2(6);

void setup() {
    // Initialize serial communication to allow debugging and data readout.
    // Using a baud rate of 9600 bps.
    Serial.begin(9600);
    
    // Uncomment the line below to set a custom delay between sensor readings (in milliseconds).
    // dht11.setDelay(500); // Set this to the desired delay. Default is 500ms.
}

void loop() {
    int temperature1 = 0;
    int humidity1 = 0;

    int temperature2 = 0;
    int humidity2 = 0;

    // Attempt to read the temperature and humidity values from the DHT11 sensor.
    int result1 = dht1.readTemperatureHumidity(temperature1, humidity1);
    int result2 = dht2.readTemperatureHumidity(temperature2, humidity2);

    // Check the results of the readings.
    // If the reading is successful, print the temperature and humidity values.
    // If there are errors, print the appropriate error messages.
    if (result1 == 0) {
        Serial.print("Temperature 1: ");
        Serial.print(temperature1);
        Serial.print(" °C\tHumidity 1: ");
        Serial.print(humidity1);
        Serial.println(" %");
    } else {
        // Print error message based on the error code.
        Serial.println(DHT11::getErrorString(result1));
    }

    if (result2 == 0) {
        Serial.print("Temperature 2: ");
        Serial.print(temperature2);
        Serial.print(" °C\tHumidity 2: ");
        Serial.print(humidity2);
        Serial.println(" %");
    } else {
        // Print error message based on the error code.
        Serial.println(DHT11::getErrorString(result2));
    }
}