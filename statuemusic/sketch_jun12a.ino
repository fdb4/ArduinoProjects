#include <SoftwareSerial.h>


#include <DFRobotDFPlayerMini.h>

int rxpin=3;
int txpin=2;
SoftwareSerial fxSerial(rxpin,txpin);
DFRobotDFPlayerMini fxplayer;
void setup(){
  int x=0;
  pinMode(rxpin,INPUT);
  pinMode(txpin,OUTPUT);
  Serial.begin(9600);
  fxSerial.begin(9600);
  fxplayer.begin(fxSerial);
  fxplayer.volume(30);
}
void loop(){

  fxplayer.play();
    delay(200000);
  
}
