# Custom Characters Guide

## Creating Custom Characters

### Designing the Character

- Custom characters are defined using a byte array.
- Each byte represents a row of the 5x8 pixel grid.

### Example: Creating a Smiley Face

```cpp
byte smiley[8] = {
  B00000,
  B01010,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};
```

### Loading the Character into LCD Memory

```cpp
void setup() {
  lcd.createChar(0, smiley); // Load custom character into memory location 0
}
```

## Displaying Custom Characters

```cpp
void displayCustomChar() {
  lcd.setCursor(0, 0);
  lcd.write(byte(0)); // Display the custom character stored in location 0
}
```

## Important Notes

- The LCD can store up to **8 custom characters** (locations 0-7).
- Custom characters are **volatile** and **lost when power is removed**.
- Use `lcd.createChar()` to define each custom character.

## Tips for Using Custom Characters

1. **Design Before Coding**
   - Sketch your character on grid paper to plan the pixel layout.
2. **Testing Patterns**
   - Test custom characters individually to ensure they display correctly.
3. **Memory Limitations**
   - Be mindful of the 8-character limit when designing multiple symbols.
4. **Reusability**
   - Store character byte arrays for reuse in other projects.
```