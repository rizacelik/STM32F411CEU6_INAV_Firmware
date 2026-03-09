# STM32F411CE INAV Flight Controller

![INAV](img/Firmware-INAV-blue.svg)
![MCU](img/MCU-STM32F411CE-green.svg)
![License](img/License-Open--Source-orange.svg)
![Platform](img/Multirotor-lightgrey.svg)

Compact and powerful **STM32F411CE based flight controller** designed for **INAV firmware**.

This controller supports multiple IMU sensors and provides essential interfaces for GPS, receivers, ESCs, telemetry and peripherals.

![INAV](img/INAV-9.0.1-blue.svg)

# ⚠️ Firmware Version Notice

## INAV 9.0.1 Update

This documentation is written for **INAV 9.0.1 firmware**.

The firmware for **INAV 9.0.1 has been redesigned and improved for better stability.**

⚠️ **Important**

Pin assignments used in **INAV 9.0.1** are **different from firmware versions earlier than INAV 9.0.1**.

Please make sure you follow the correct documentation for your firmware version.

| Firmware Version | Documentation |
|------------------|--------------|
| INAV 9.0.1 and newer | Use **this README** |
| Older than INAV 9.0.1 | Use **README2** |

Starting from **INAV 9.0.1**, the pin configuration provided in this document will remain the reference for future firmware releases.

# Detailed Diagram
![License](img/inav-9-0-1.png)

---
## SBUS Signal Inverter
The inverter is easy to make, only requires 2 resistors (10K ohm and 4.7K ohm), 1 transistor (BC547b), and one cable. These are all very cheap and easy to find.

![SBUS Inverter](img/sbus.png)

---

# ✈️ Features

- STM32F411CE MCU
- Supported IMU sensors  
  - MPU9250  
  - MPU6500  
  - BMI160
- BMP280 Barometer
- MAX7456 OSD
- 2 Hardware UART ports
- SoftSerial support
- I2C bus for compass and peripherals
- WS2811 LED strip support
- Up to **6 motor outputs**
- Additional **servo outputs**
- Battery voltage monitoring
- Current sensing
- RSSI analog input
- Airspeed sensor input

---

# 📦 Firmware

This flight controller runs **INAV Firmware**.

Download firmware:

inav_xxx_STM32F411CE.zip


`xxx` = firmware version number.

Example:


inav_7.1.0_STM32F411CE.zip


---

# 🖥 INAV Configurator

Download the configurator matching the firmware version.

https://github.com/iNavFlight/inav-configurator/releases

Example:

| Firmware | Configurator |
|--------|--------|
| INAV 7.x | Configurator 7.x |

Extract the ZIP file and run:


inav-configurator.exe


---

# 🔌 Enter DFU Mode

To flash firmware, the flight controller must be in **DFU mode**.

### Steps

1️⃣ Locate the **BOOT0 button** on the board

2️⃣ Press and **hold BOOT0**

3️⃣ Connect the USB cable to your PC

4️⃣ Release the button

If successful, **DFU** will appear in the configurator connection menu.

---

# ⚠ DFU Driver Fix

If DFU does not appear, install drivers using:

https://impulserc.blob.core.windows.net/utilities/ImpulseRC_Driver_Fixer.exe

Run the program and allow it to install the required drivers.

---

# 💾 Flashing Firmware

1. Open **INAV Configurator**

2. Go to  "Firmware Flasher"

3. Click "Load Firmware [Local]""

4. Select the file "inav_xxx_STM32F411CE.hex"

5. Click "Flash Firmware"


The firmware will start uploading.

---

# ✅ Successful Installation

If flashing is successful:

- wait a few seconds
- the **blue LED will start blinking**

🎉 Firmware installed successfully.

---

# 🧠 Supported IMU Sensors

This board supports the following SPI IMU sensors:

| Sensor |
|------|
MPU9250 |
MPU6500 |
BMI160 |

---

# 📍 Pinout

---

# 🔔 Beeper

| Function | Pin |
|--------|--------|
Beeper | PB2 |

---

# 🧭 IMU (SPI)

| Signal | Pin |
|------|------|
SCK | PB13 |
MISO | PB14 |
MOSI | PB15 |
CS | PB12 |

---

# 🌡 Barometer (BMP280)

| Signal | Pin |
|------|------|
CS | PC15 |

---

# 📺 OSD (MAX7456)

| Signal | Pin |
|------|------|
CS | PC14 |

---

# 🔌 UART Ports

### UART1

| Function | Pin |
|------|------|
TX | PA15 |
RX | PB3 |

---

### UART2

| Function | Pin |
|------|------|
TX | PA2 |
RX | PA3 |

---

# 🧵 SoftSerial

| Function | Pin |
|------|------|
TX | PA0 |
RX | PA1 |

---

# 🔗 I2C

| Signal | Pin |
|------|------|
SCL | PB8 |
SDA | PB9 |

---

# ⚡ ADC Inputs

| Function | Pin |
|------|------|
VBAT | PA4 |
Current Meter | PA5 |
RSSI | PA6 |
Airspeed | PA7 |

---

# 💡 LED Strip

| Function | Pin |
|------|------|
WS2811 LED | PB10 |

---

# 🌀 Motor Outputs

| Motor | Pin |
|------|------|
Motor1 | PB4 |
Motor2 | PB5 |
Motor3 | PB0 |
Motor4 | PB1 |
Motor5 / Servo | PB6 |
Motor6 / Servo | PB7 |

---

# 🎮 Servo Outputs

| Servo | Pin |
|------|------|
Servo1 | PA8 |
Servo2 | PA9 |
Servo3 | PA10 |

---

# ⚙ Recommended Setup Steps

After flashing firmware:

1. Calibrate accelerometer
2. Calibrate compass
3. Configure receiver
4. Configure motor outputs
5. Setup GPS (if used)
6. Setup flight modes

---

# 🔗 Useful Links

INAV Official Website

https://inavflight.com

INAV GitHub

https://github.com/iNavFlight

INAV Documentation

https://github.com/iNavFlight/inav/wiki

---

# 📜 License

This project is open-source and intended to support the INAV ecosystem.

---

# ❤️ Acknowledgements

Special thanks to the **INAV community** and developers for their continuous work on the firmware.

