# Gesture-Controlled-Vehicle

### INTRODUCTION AND OVERVIEW
Gesture controlled vehicle using node MCU and Android phone.Used Blynk cloud Service and
Blynk app for sending data of android phone accelerometer.

### COMPONENTS REQUIRED
1. ESP8266 12E Node MCU Develepment Board
2. L293d Motor Driver Module
3. Power Bank
4. Android phone with Blynk app
5. Vehicle Chasis
6. Wheels
7. DC Motors
8. Breadboard

### WORKING PRINCIPLE
Used the Acclerometer Widget of Blynk Android app.Using Android phones Accelerometer 
checked the readings of x,y and z axis at differnt orientation of phone and then send
this data to Node MCU through blynk cloud. Further the accelerometer data is 
calliberated in such that node MCU gives command to vehicle only at certain values .
L293d Motor driver is used for driving the 2 DC motors and Node MCU doesnt provide 
enough power.
##### IMPORTANT NOTE
Do not forget to download ESP8266WiFi library in the Arduino IDE
### AREAS OF APPLICATION
1. Concept can be extended to Robotic arms.
2. Wheel Chairs.
3. Can Be used in Drones.
