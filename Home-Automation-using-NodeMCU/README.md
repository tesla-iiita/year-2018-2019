# Home-Automation-using-NodeMCU

This is a mini project on Home automation using NodeMCU.

Components Required: 
1. NodeMCU
2. RGB LED
3. DHT 11
4. HR SC04 (2)
5. Some LEDs (Relay modules to be used actually when automating home. For testing purpose, this is fine)
6. Buzzer
7. LDR sensor
8. Connecting wires and bread board
You will also need an account on IFTTT and an service created using Webhooks as trigger and Notification as action. 
An adafruit.io account is required to control the colour of RGB Led as we will be using a colour picker on dashboard and updating the value in a feed named "Light" which will be then read by us and colour of RGB Ld will change accordingly.

This project uses "NewPing.h" header file with help of which we can use HC SR04 using only 1 pin of our NodeMCU. This library can be found on github oron arduino website.

Using this project, we will revieve a notification on out phone whenever the doorbell is pressed. Thus you may listen to to loud music on your phones and the doorbell's won't be missed.

Next we try to keep a count of people inside the room by trying to count the number of people entering and exiting. This part is not ready yet as proper implementation would require training the system using ML.

If there is someone inside the room and the Heat index (measured by DHT11) is above a certain value (Currently 22), fan is turned on.

The colour of RGB LED will be controlled using Adafruit.io and will be updated on every change.


Furthur Possible improvements:
We can add an option of bypassing room condition using a switch on dashboard.
More components can be added
To count people in room, we have to implement ML
