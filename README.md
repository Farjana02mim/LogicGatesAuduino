# Logic Gates Using Arduino and SPDT Switches

## 📌 Project Overview

This project demonstrates the implementation and simulation of basic digital logic gates using an **Arduino UNO, SPDT switches, LEDs, and Proteus**.

The main purpose of this project is to understand how different logic gates work using practical hardware components and Arduino programming.

## 🎯 Objectives

- Understand the basic concepts of digital logic gates.
- Implement logic gates using Arduino.
- Use SPDT switches as digital inputs.
- Use an LED as the output indicator.
- Simulate the circuits using Proteus.
- Verify the truth tables of different logic gates.

## 🔧 Components Used

- Arduino UNO
- 2 × SPDT Switch
- LED
- 220Ω Resistor
- +5V Power Supply
- Ground (GND)
- Proteus Design Suite

## 🚪 Logic Gates Implemented

The following logic gates were implemented:

1. AND Gate
2. OR Gate
3. XOR Gate
4. NAND Gate

---

## 1️⃣ AND Gate

The LED turns ON only when **both inputs are HIGH**.

### Truth Table

| Input A | Input B | Output |
| ------- | ------- | ------ |
| 0       | 0       | 0      |
| 0       | 1       | 0      |
| 1       | 0       | 0      |
| 1       | 1       | 1      |

### Arduino Code

```cpp
int SWA = 2;
int SWB = 5;
int LED = 13;

void setup() {
  pinMode(SWA, INPUT);
  pinMode(SWB, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int inputA = digitalRead(SWA);
  int inputB = digitalRead(SWB);

  if (inputA == HIGH && inputB == HIGH) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}
```
