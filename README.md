# Arduino-examples
CP210x VCP Windows : port error driver


## Push Button Toggle LED Circuit - LED_CONTROL.ino
## 2. Pin Mapping Table

| Component Pin | Connects To | Notes |
| :--- | :--- | :--- |
| **LED Anode** (Long leg / bent lead) | **Arduino Digital Pin 7** | Output signal control |
| **LED Cathode** (Short leg / flat edge) | **$220\ \Omega$ Resistor** | Current-limiting protection |
| **Resistor Other End** | **GND Rail / Arduino GND** | Common ground path |
| **Push Button Terminal 1a** | **Arduino Digital Pin 12** | Input signal pin |
| **Push Button Terminal 2a** | **GND Rail / Arduino GND** | Completes connection when pressed |
