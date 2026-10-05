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
2️⃣ OR Gate

The LED turns ON when at least one input is HIGH.

Truth Table
Input A	Input B	Output
0	0	0
0	1	1
1	0	1
1	1	1
Arduino Code
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

  if (inputA == HIGH || inputB == HIGH) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}
3️⃣ XOR Gate

The LED turns ON when the two inputs are different.

Truth Table
Input A	Input B	Output
0	0	0
0	1	1
1	0	1
1	1	0
Arduino Code
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

  if (inputA != inputB) {
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
}
4️⃣ NAND Gate

NAND is the opposite of AND. The LED remains ON except when both inputs are HIGH.

Truth Table
Input A	Input B	Output
0	0	1
0	1	1
1	0	1
1	1	0
Arduino Code
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
    digitalWrite(LED, LOW);
  }
  else {
    digitalWrite(LED, HIGH);
  }
}
🔌 Circuit Connections
Switch A
SPDT COM → Arduino Digital Pin 2
One side → +5V
Other side → GND
Switch B
SPDT COM → Arduino Digital Pin 5
One side → +5V
Other side → GND
LED
Arduino Digital Pin 13 → 220Ω Resistor
Resistor → LED
LED → GND
🖥️ Simulation

The circuits were designed and tested using Proteus.

The SPDT switches provide the two digital inputs, while the LED represents the logic gate output.

📂 Project Structure
Logic-Gates-Arduino/
│
├── AND_Gate/
│   └── AND_Gate.ino
│
├── OR_Gate/
│   └── OR_Gate.ino
│
├── XOR_Gate/
│   └── XOR_Gate.ino
│
├── NAND_Gate/
│   └── NAND_Gate.ino
│
├── Proteus/
│   └── Logic_Gates_Proteus.pdsprj
│
└── README.md
🛠️ Tools & Technologies
Arduino UNO
Arduino IDE
Proteus
C/C++
Digital Electronics
📚 Learning Outcomes

Through this project, I learned:

Basic Boolean logic.
Truth tables of logic gates.
Arduino digital input and output.
Interfacing SPDT switches with Arduino.
Controlling LEDs using Arduino.
Circuit simulation using Proteus.
Practical implementation of digital logic.
👩‍💻 Author

Farjana Akter Mim

Computer Science & Engineering Student

⭐ Acknowledgement

This project was developed as a practical learning project to explore Arduino programming, digital electronics, and logic gate simulation.

If you find this project useful, feel free to ⭐ the repository.
