
#include <TFT.h>
#include <SPI.h>

int MAX_CMD_LENGTH = 10;
char cmd[10];
int cmdIndex;
char incomingByte;
String statePin0="";
String statePin1="";
String statePin2="";
String statePin3="";
String statePin4="";
String statePin5="";
String statePin6="";
String statePin7="";
String statePin8="";
String statePin9="";
String statePin10="";
String statePin11="";
String statePin12="";
String statePin13="";


int isKnow=0;//is 1 when the input serial is a know command
void setup() {
  
    
    //Setup Serial Port with baud rate of 9600
    Serial.begin(9600);
    cmdIndex = 0;
    
}
 
void loop() {
    
    if (incomingByte=Serial.available()>0) {
      isKnow=0;
      char byteIn = Serial.read();
      cmd[cmdIndex] = byteIn;
      
      if(byteIn=='\n'){
        //command finished
        cmd[cmdIndex] = '\0';
        Serial.println(cmd);
        cmdIndex = 0;
        isKnow +=pinModes();;
        isKnow+=outputStates();
       
        
        if(!isKnow){
          Serial.println("Comando desconocido.");
        }
        
      }else{
        if(cmdIndex++ >= MAX_CMD_LENGTH){
          cmdIndex = 0;
        }
      }
    }
    
}
