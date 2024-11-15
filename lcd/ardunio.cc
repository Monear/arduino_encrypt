#include <LiquidCrystal.h>

// Initialize the library with the LCD interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Define a custom character (smiley face)
byte smiley[8] = {
  B00000,
  B01010,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};

void setup() {
  // Set up the LCD's columns and rows
  lcd.begin(16, 2);

  // Create the custom character
  lcd.createChar(0, smiley);

  // Display a static message
  lcd.print("Hello, Arduino!");
  delay(2000); // Pause for 2 seconds

  // Clear the display
  lcd.clear();

  // Display custom character
  lcd.print("Custom Char: ");
  lcd.write(byte(0)); // Display the smiley face
  delay(2000);

  // Prepare for scrolling text
  lcd.clear();
  lcd.print("Scrolling Text Demo");
  delay(1000);
}

void loop() {
  // Scroll the text to the left
  lcd.scrollDisplayLeft();
  delay(300);
}