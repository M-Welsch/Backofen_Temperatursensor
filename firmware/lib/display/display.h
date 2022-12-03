#include <U8g2lib.h>
#include <string.h>

#include <Wire.h>
#include "status.h"

class Display {
    void u8g2_prepare(void);
    void show_line(const char* const content, int line);
  public:
    void setup(void);
    void show_lines(String line1, String line2, String line3, String line4);
    void show_temperature(const float temperature);
    void show_battery_status(const float voltage);
    void show_status(const struct Status *status);
    void show_undervoltage(const float voltage);
    void off(void);
};
