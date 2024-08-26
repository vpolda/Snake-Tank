//This script tests updating the LCD screen based on interrupts 
//instead of the delay function

// include the library code:
#include <LiquidCrystal.h>
#include <SimpleTimer.h>
 
// initialize the library with the numbers of the interface pins
//Goes RW, E, D4,D5,D6,D7
LiquidCrystal lcd(45, 35, 38, 39, 40, 41);

int a = 0;

//Timer
SimpleTimer lcdTimer(5000);

void setup()
{
  Serial.begin(115200);
  // set up the LCD's number of columns and rows (c,r), only do this once on setup
  lcd.begin(16, 2);
  //row 0 = first
  lcd.setCursor(0, 0);
  // Print a message to the LCD.
  lcd.print("LCD Interrupts");
  //Move to second row for data
  lcd.setCursor(0, 1);
}

void loop() {
  if (lcdTimer.isReady()) {            // Check is ready a first timer
      //Serial.println("5 seconds have passed");
      lcdTimer.reset();  

      //lcd.clear();//Clear the lcd screen
      // set the cursor to column 0, line 1
      // (note: line 1 is the second row, since counting begins with 0):
      
    
      // print the number of seconds since reset:
      lcd.print(a);
      ++a;
        
    }
}