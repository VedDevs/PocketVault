# PocketVault Wiring

## Seeed Studio XIAO RP2040 Pinout
![https://docs.zephyrproject.org/latest/boards/seeed/xiao_rp2040/doc/index.html](assests/pinout.jfif)


### OLED Display (SSD1306 I2C)

| OLED Pin | XIAO RP2040 Pin |
|-----------|----------------|
| VCC | 3V3 |
| GND | GND |
| SDA | D6 |
| SCL | D7 |

---

### Rotary Encoder

| Encoder Pin | XIAO RP2040 Pin |
|-------------|----------------|
| CLK | D2 |
| DT | D3 |
| SW | D4 |
| VCC | 3V3 |
| GND | GND |

---

## Wiring Diagram

```text
                PocketVault

         ┌─────────────────────┐
         │   XIAO RP2040       │
         │                     │
         │ D2 ───── CLK        │
         │ D3 ───── DT         │
         │ D4 ───── SW         │
         │                     │
         │ D6 ───── SDA        │
         │ D7 ───── SCL        │
         │                     │
         │ 3V3 ──── VCC        │
         │ GND ──── GND        │
         └─────────────────────┘
                  │
        ┌─────────┴─────────┐
        │                   │
   ┌─────────┐       ┌──────────┐
   │ OLED    │       │ Encoder  │
   │ SSD1306 │       │   EC11   │
   └─────────┘       └──────────┘
````

---

## Firmware Pin Definitions

```cpp
#define ENCODER_CLK 2
#define ENCODER_DT  3
#define ENCODER_SW  4

#define OLED_SDA    6
#define OLED_SCL    7
```

---

