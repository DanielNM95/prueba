#include <Arduino.h>

class funcionleds
{
 private : 
   int  _led1 , _led2, _led3 ,_pulsadorled1 , _pulsadorled2, _pulsadorled3;
   int _condicional;
   int _LED;
   int _ledState ;
   int _buttonState;       
   int _lastButtonState ;
   unsigned long _lastDebounceTime ;
   unsigned long _debounceDelay ;
   int _brillo1 , _brillo2 , _brillo3;


public:
 funcionleds (int led1 ,int led2 ,int led3 , int pulsadorled1, int pulsadorled2, int pulsadorled3, int condicional, int LED, int ledState , int buttonState , int lastButtonState ,  unsigned long lastDebounceTime ,unsigned long debounceDelay , int brillo1 , int brillo2 , int brillo3 );
 void brilloleds();

};



