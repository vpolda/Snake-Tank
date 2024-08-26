//This script tests updating the LCD screen based on interrupts 
//instead of the delay function

// LCD stuff
#include <LiquidCrystal.h>
 
// initialize the library with the numbers of the interface pins
//Goes RW, E, D4,D5,D6,D7
LiquidCrystal lcd(45, 35, 38, 39, 40, 41);

//Sensor stuff
#include <DHT11.h>

DHT11 dht1(4);
DHT11 dht2(6);

int temperature1 = 0;
int humidity1 = 0;

int temperature2 = 0;
int humidity2 = 0;

int result1 = 0;
int result2 = 0;

//Timer stuff
#include <SimpleTimer.h>
SimpleTimer lcdTimer(5000);

void setup()
{
  Serial.begin(115200);
  // set up the LCD's number of columns and rows (c,r), only do this once on setup
  lcd.begin(16, 2);
  //row 0 = first
  lcd.setCursor(0, 0);
  // Print a message to the LCD.
  lcd.print("Dual Reading");
  //Move to second row for data
}

void loop() {
  if (lcdTimer.isReady()) {            // Check is ready a first timer
    //Serial.println("5 seconds have passed");
    lcdTimer.reset();  

    lcd.clear();

    //Sensor 1
    //Read temp and humidity
    int result1 = dht1.readTemperatureHumidity(temperature1, humidity1);

    lcd.setCursor(0, 0);

    if (result1 == 0) {
      lcd.print("Temp 1: ");
      lcd.print(temperature1);
      lcd.print(" °C\tHumidity 1: ");
      lcd.print(humidity1);
      lcd.print(" %");
    } else {
      // Print error message based on the error code.
      lcd.print(DHT11::getErrorString(result1));
    }

    //Sensor 2
    
    //Read temp and humidity
    int result2 = dht2.readTemperatureHumidity(temperature2, humidity2);

    lcd.setCursor(0, 1);

    if (result2 == 0) {
      lcd.print("Temp 2: ");
      lcd.print(temperature2);
      lcd.print(" °C\tHumidity 2: ");
      lcd.print(humidity2);
      lcd.print(" %");
    } else {
      // Print error message based on the error code.
      lcd.print(DHT11::getErrorString(result2));
    }
  }
}