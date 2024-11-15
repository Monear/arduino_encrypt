# LCD Troubleshooting Guide

## Common Issues

### No Display
1. Check power connections
2. Verify contrast setting
3. Test backlight functionality
4. Confirm pin connections

### Garbled Text
```cpp
void resetLCD() {
  lcd.begin(16, 2);
  lcd.clear();
  lcd.home();
}
```

### Contrast Problems
- Adjust potentiometer
- Check V0 pin voltage (0-5V)
- Try fixed voltage divider:
```cpp
// Alternative to pot: use resistors
// 2.2kΩ to ground
// 4.7kΩ to V0
```

## Debug Tools
```cpp
void testLCD() {
  lcd.clear();
  lcd.print("LCD Test");
  for(int i = 0; i < 16; i++) {
    lcd.setCursor(i, 1);
    lcd.write(0xFF); // Print full blocks
    delay(100);
  }
}
```

## Maintenance
1. Regular contrast adjustment
2. Clean connections
3. Monitor power supply
4. Check for loose wires
