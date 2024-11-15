## 04_LCD_SCROLLING.MD

```markdown
# LCD Scrolling Text Guide

## Basic Text Scrolling

```cpp
void scrollTextLeft() {
  for (int position = 0; position < 16; position++) {
    lcd.scrollDisplayLeft();
    delay(200);
  }
}
```

## Custom Scrolling Function

```cpp
void scrollCustomText(String message) {
  int messageLength = message.length();
  for (int position = 0; position < messageLength; position++) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(message.substring(position));
    delay(300);
  }
}
```

## Auto-Scrolling Long Messages

```cpp
void autoScrollText(String message) {
  lcd.clear();
  lcd.autoscroll();
  lcd.print(message);
  delay(2000);
  lcd.noAutoscroll();
}
```

## Tips for Scrolling Text

- Use `lcd.scrollDisplayLeft()` and `lcd.scrollDisplayRight()` to create scrolling effects.
- `lcd.autoscroll()` automatically scrolls the display each time a new character is added.
- Remember to call `lcd.noAutoscroll()` to stop the auto-scrolling behavior.
