#define BLYNK_PRINT Serial                  //for Serial Printing Connection status and IP Adress
#include<BlynkSimpleEsp8266.h>              //including library for blynk and ESP8266
#include<ESP8266WiFi.h>     

                   
char auth[]="4529c3d8d6824a11aef323e102cbd521";           //  AUTHENTICATION CODE For blynk
char ssid[]="Warning : Virus Found";                      //  Network name to which connected
char pass[]="";                                           //  wifi password ,leave if there is no password


int la=D1;                                              
int lb=D2;                                                //Defining the 4 pins to be connected to motor driver
int ra=D3;
int rb=D4;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);                                     //opening serial monitor and setting upn of baud rate for serial communication 
  
  pinMode(la,OUTPUT);
  pinMode(lb,OUTPUT);
  pinMode(ra,OUTPUT);
  pinMode(rb,OUTPUT);
  Blynk.begin(auth,ssid,pass);                              // Here NodeMCU connects to blynk cloud
}

void loop() {
  // put your main code here, to run repeatedly:
    Blynk.run();                                            //to process incoming request and do the housekeeping of blynk connected
}


BLYNK_WRITE(V1)                                             // Function with input Virtual pin V1 to recieve data and process it accordingly
{
  int x=param[0].asInt();
  int y=param[1].asInt();                                   // Taking the values of x , y and z from mobile accelerometer 
  int z=param[2].asInt();
  Serial.print(x);
  Serial.print(" ");
Serial.print(y);
  Serial.print(" ");                                        //Printing the values of x,y,z
Serial.print(z);
  Serial.println(" ");
    if(x>=4)
    {
      left();
    }
    else if(x<-4)
    {
      right();
    }
    else if(y>=3)                                           //Writing the command according to values recieved
    {
      backward();
    }
    else if(y<=-3)
    {
      forward();
    }
    else{
      stopm();
    }
}
void forward()                                //Function for forward motion 
{
  stopm();
   digitalWrite(ra,HIGH);
                  digitalWrite(rb,LOW);
                  digitalWrite(la,HIGH);
                  digitalWrite(lb,LOW);
}
void backward()                               //Function for backward motion 
{
  stopm();
   digitalWrite(ra,LOW);
                  digitalWrite(rb,HIGH);
                  digitalWrite(la,LOW);
                  digitalWrite(lb,HIGH);
}
void left()                                   //Function to turn left
{
  stopm();
  digitalWrite(ra,LOW);
                  digitalWrite(rb,HIGH);
                  digitalWrite(la,HIGH);
                  digitalWrite(lb,LOW);
}     
void right()                                  //Function to turn right
{
 stopm();
  digitalWrite(ra,HIGH);
                  digitalWrite(rb,LOW);
                  digitalWrite(la,LOW);
                  digitalWrite(lb,HIGH);
}
void stopm(void)                              //Function for STOP
{
  digitalWrite(ra,LOW);
  digitalWrite(rb,LOW);
  digitalWrite(la,LOW);
  digitalWrite(lb,LOW);
  delay(10);
}

