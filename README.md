# COSC111 Laboratory Activities

## Lab Activity 1: Running Light

### Objective
Create a running light effect from right to left using `digitalWrite()`.

### Components & Setup
- LEDs connected to pins **8 to 12**.
- Turn LEDs **ON** sequentially from **pin 12 to pin 8**.
- Once all LEDs are ON, turn them **OFF** in the same sequence.

---

## Lab Activity 2: Brightness Control

### Objective
Enhance the output of Lab Activity 1 by adding brightness control.

### Components & Setup
- Uses the same LED setup from **Lab Activity 1**.
- Utilizes `analogWrite()` to create a fading effect.
- Implements a `while` loop to gradually increase and decrease brightness when turning LEDs **ON** and **OFF**.

---

## Lab Activity 3: Fire Detector Simulation

### Objective
Simulate a fire detector using a **photoresistor** and **temperature sensor** (substituted for a thermistor in Tinkercad).

### Components & Setup
- **Temperature Sensor**: Pin **A0**  
- **Photoresistor**: Pin **A2**  
- **LED**: Pin **12**  
- Uses `analogRead()` to retrieve input from sensors.
- Applies the `map()` function to convert sensor readings into digital values.
- The **LED blinks** when sensor readings exceed a predefined threshold.

---

## Lab Activity 4: Light Sensor with Serial Monitor Control

### Objective
Use a **photoresistor** to detect light intensity and blink an LED when a threshold is met. The process stops when the user types `"stop"` in the **Serial Monitor**, regardless of casing.

### Components & Setup
- **Photoresistor**: Pin **A2**  
- **LED**: Pin **13**  
- Converts **analog readings** using `map()`.
- The LED **blinks** when the light threshold is exceeded.
- Uses `Serial.available()` to detect user input.
- When `"stop"` is typed, the LED stops blinking.

---

## Lab Activity 5: Remote LED Control via FastAPI

### Objective
Create a circuit that allows remote LED control via a **FastAPI** connection.

### Components & Setup
- The **Arduino** code listens for input:
  - Receives **'1'** → **Turns LED ON**
  - Receives **'0'** → **Turns LED OFF**
- The **Python FastAPI** application:
  - Establishes connection with Arduino (`time.sleep(2)` ensures stable connection).
  - Handles:
    - `POST /led-on` → Sends `'1'` to turn LED **ON**.
    - `POST /led-off` → Sends `'0'` to turn LED **OFF**.
  - Closes connection during **shutdown**.

---

## Lab Activity 6: Button-Controlled FastAPI LED

### Objective
Enhance **Lab Activity 5** by adding a circuit that sends button-press signals to **FastAPI**, controlling the LED.

### Components & Setup
- **Arduino**:
  - Continuously prints **'1'** when the button is pressed.
  - Prints **'0'** when the button is released.
- **Python Code**:
  - Connects to **FastAPI** and forwards button press data.
  - Uses the `requests` library to send values.
  - Stores the **FastAPI address** in `api_url` to maintain connectivity.
  - Forwards Arduino input data to **FastAPI**, triggering the LED remotely.

---

This repository contains all my laboratory activities for **COSC111**, demonstrating various Arduino and Python-based microcontroller projects. 🚀
