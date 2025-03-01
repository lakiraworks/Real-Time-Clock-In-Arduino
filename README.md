# RTC with LCD Display Project(real time clock)

This project demonstrates how to use a DS1307 RTC (Real-Time Clock) module with an LCD to display the current date and time. The program reads the RTC data and displays the date and time on an LCD screen (16x2) with an I2C interface.

## Components Required:
- **DS1307 RTC Module**
- **16x2 LCD Display (with I2C interface)**
- **Arduino Board (e.g., Arduino Uno)**

## Libraries Used:
- **I2C_RTC**
- **Wire**
- **LiquidCrystal_I2C**

## Project Description:
This code reads the current time and date from a DS1307 RTC module and displays it on a 16x2 I2C LCD screen. The time and date are updated every second. The following information is shown on the LCD:
- **Date**: Day - Month - Year
- **Time**: Hour : Minute : Second

## Circuit Connections:
1. **DS1307 RTC Module**:
   - VCC to 5V on Arduino
   - GND to GND on Arduino
   - SDA to A4 on Arduino (on Uno)
   - SCL to A5 on Arduino (on Uno)

2. **16x2 LCD Display (I2C)**:
   - VCC to 5V on Arduino
   - GND to GND on Arduino
   - SDA to A4 on Arduino (on Uno)
   - SCL to A5 on Arduino (on Uno)

## Code Overview:
1. **Initialization**:
   - The code initializes the LCD and RTC modules.
   - The RTC begins communication to read the current time and date.

2. **Display Date and Time**:
   - In the `loop()` function, the current time and date are printed to the serial monitor.
   - The date (Day-Month-Year) and time (Hour:Minute:Second) are displayed on the LCD.

3. **LCD Display**:
   - The `LiquidCrystal_I2C` library is used to control the LCD display.
   - The current time and date are displayed on the LCD with appropriate formatting.

4. **RTC Functions**:
   - The `RTC.getDay()`, `RTC.getMonth()`, `RTC.getYear()` functions retrieve the current day, month, and year from the RTC.
   - The `RTC.getHours()`, `RTC.getMinutes()`, `RTC.getSeconds()` functions retrieve the current time from the RTC.

5. **Customization**:
   - You can uncomment the lines in the `setup()` function to set the date and time manually, for example:
     ```cpp
     RTC.setDay(WEDNESDAY);
     RTC.setDate(26, 2, 2025);
     RTC.setTime(16, 27, 35);
     ```

## How to Use:
1. Connect the components according to the circuit diagram.
2. Upload the code to your Arduino board.
3. Open the serial monitor to see the date and time printed.
4. The LCD screen will display the current date and time.

## Notes:
- Ensure that the I2C address of the LCD is set correctly (0x27 is common for many I2C LCDs).
- If you need to change the time or date, uncomment the appropriate lines in the `setup()` function and modify them as needed.

## License:
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments:
- The code uses the `LiquidCrystal_I2C` and `I2C_RTC` libraries for interfacing with the LCD and RTC modules.
