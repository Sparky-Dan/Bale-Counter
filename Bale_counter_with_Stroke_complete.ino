// include the library code:
#include <Wire.h> // Library for I2C communication
#include <LiquidCrystal_I2C.h> // Library for LCD

// Wiring: SDA pin is connected to A4 and SCL pin to A5.
// Connect to LCD via I2C, default address 0x27 (A0-A2 not jumpered)
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 20, 4);

// set up a constant for the BALER switchPin
const int switchPin = 7;
const int switchpin = 8;

int hits = 0;
int balehit = 0;

// variable to hold the value of the switchPin
int switchState = 0;
int SwitchState = 0;

// variable to hold previous value of the switchpin
int prevSwitchState = 0;
int Prevswitchstate = 0;

void setup() {  
   // Initiate the LCD:
  lcd.init();
  lcd.backlight();

  // set up the switch pin as an input
  pinMode(switchPin,INPUT);
  pinMode (switchpin, INPUT);
  lcd.clear();
  lcd.setCursor(7, 0);
  lcd.print("HELLO");
  lcd.setCursor(8, 1);
  lcd.print("RON");
}

void loop() {  
  // check the status of the switch
  switchState = digitalRead(switchPin);
  SwitchState = digitalRead(switchpin);
  lcd.setCursor (5, 2);
  lcd.print ("Bale Count");
  lcd.setCursor (9, 3);
  lcd.print (balehit);
  // compare the switchState to its previous state
  if (switchState != prevSwitchState) {
    if (switchState == LOW) {
      hits = hits + 1;
    }
  }
 if (SwitchState != Prevswitchstate) {
  if (SwitchState == LOW) {
    lcd.clear();
    delay(500);
    lcd.setCursor (4, 0);
    lcd.print ("Stroke count");
    lcd.setCursor (9, 1);
    lcd.print (hits);
    delay(100);
    hits = 0;
    balehit = balehit + 1;
  }
    }
  
  // save the current switch state as the last state 
  prevSwitchState = switchState;
}
