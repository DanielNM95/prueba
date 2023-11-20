
#include <funcionleds.h>
int led1 = 13;
int led2 = 12;   
int led3 = 14;  
int pulsadorled3 = 39;   
int pulsadorled1 = 35;  
int pulsadorled2 = 34;
int condicional = 36;
int brillo1 , brillo2 ,brillo3;
int  LED = 32;
int ledState = LOW;
int buttonState;       
int lastButtonState = LOW;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

funcionleds accion (led1, led2, led3, pulsadorled1,pulsadorled2, pulsadorled3, condicional, LED, ledState, buttonState, lastButtonState, lastDebounceTime, debounceDelay, brillo1, brillo2, brillo3);

void setup() {
  Serial.begin(115200);
  Serial.println();
  
  digitalWrite(LED, ledState);

}

void loop() {
  accion.brilloleds();

}