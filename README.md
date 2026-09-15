# Arduino-examples
CP210x VCP Windows : port error driver
download the exact file from Silicon labs official page. Run the installer after extracting the .zip file.
The error should be resolved in the Device Manager.

In `smart_streetLamp_concept.ino`, the LDR readings were approximately **50 under direct flashlight**, **700–800 under dim light**, and **950+ when completely covered by hand**.



## Push Button Toggle LED Circuit - LED_CONTROL.ino
## 2. Pin Mapping Table

| Component Pin | Connects To | Notes |
| :--- | :--- | :--- |
| **LED Anode** (Long leg / bent lead) | **Arduino Digital Pin 7** | Output signal control |
| **LED Cathode** (Short leg / flat edge) | **$220\ \Omega$ Resistor** | Current-limiting protection |
| **Resistor Other End** | **GND Rail / Arduino GND** | Common ground path |
| **Push Button Terminal 1a** | **Arduino Digital Pin 12** | Input signal pin |
| **Push Button Terminal 2a** | **GND Rail / Arduino GND** | Completes connection when pressed |
