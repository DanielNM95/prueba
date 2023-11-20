#include <funcionleds.h>
#include <Arduino.h>


funcionleds::funcionleds (int led1 , int led2 , int led3 , int pulsadorled1, int pulsadorled2, int pulsadorled3 ,int condicional , int LED, int ledState , int buttonState , int lastButtonState, unsigned long lastDebounceTime ,unsigned long debounceDelay , int brillo1 ,int brillo2 , int brillo3 ){
    pinMode(led1, OUTPUT);
    _led1 = led1;
    pinMode(led2, OUTPUT);
    _led2 = led2;
    pinMode(led3, OUTPUT);
    _led3 = led3;
    pinMode(pulsadorled1, INPUT);
    _pulsadorled1 = pulsadorled1;
    pinMode(pulsadorled2, INPUT);
    _pulsadorled2 = pulsadorled2;
    pinMode(pulsadorled3, INPUT);
    _pulsadorled3 = pulsadorled3;
    pinMode(condicional, INPUT);
    _condicional = condicional;
    pinMode(LED ,OUTPUT);
    _LED = LED;

    _ledState = ledState;
    _buttonState = buttonState;
    _lastButtonState = lastButtonState;
    _lastDebounceTime = lastDebounceTime;
    _debounceDelay = debounceDelay;
    _brillo1 = brillo1;
    _brillo2 = brillo2;
    _brillo3 = brillo3;
}
void funcionleds::brilloleds(){
     int reading = digitalRead(_condicional);
  if (reading != _lastButtonState) {
    _lastDebounceTime = millis();
  }
  if ((millis() - _lastDebounceTime) > _debounceDelay) {
    if (reading != _buttonState) {
      _buttonState = reading;
      if (_buttonState == HIGH) {
        _ledState = !_ledState;
      }
    }
  }
  digitalWrite(_LED, _ledState);
  _lastButtonState = reading;

 if (_ledState == HIGH){
       if (digitalRead(_pulsadorled1) == HIGH)
  {
    _brillo1++;     

    if (_brillo1 >= 255)
    {
      _brillo1 = 255;    
    }
    analogWrite(_led1, _brillo1);
     }
  delay(15);
      }else {
        if (digitalRead(_pulsadorled1) == HIGH )
  {
    _brillo1--;   

    if (_brillo1 <= 0)
    {
      _brillo1 = 0;   
    }
    analogWrite(_led1, _brillo1);
  }
  delay(15);
      }


  if (_ledState == HIGH){
  if (digitalRead(_pulsadorled2) == HIGH)
  {
    _brillo2++;     

    if (_brillo2 >= 255)
    {
      _brillo2 = 255;    
    }
     analogWrite(_led2, _brillo2);
  }
  delay(15);
 }else{
  if (digitalRead(_pulsadorled2) == HIGH )
  {
    _brillo2--;   

    if (_brillo2 <= 0)
    {
      _brillo2 = 0;   
    }
    analogWrite(_led2, _brillo2);
  }
}

 if (_ledState == HIGH){
  if (digitalRead(_pulsadorled3) == HIGH)
  {
    _brillo3++;     

    if (_brillo3 >= 255)
    {
      _brillo3 = 255;    
    }
     analogWrite(_led3, _brillo3);
  }
delay(15);
   } else{
    if (digitalRead(_pulsadorled3) == HIGH )
  {
    _brillo3--;   

    if (_brillo3 <= 0)
    {
      _brillo3 = 0;   
    }
    analogWrite(_led3, _brillo3);
}
   }
}