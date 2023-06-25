const int RED_LED_PIN = 6;
const int GREEN_LED_PIN = 7;
bool isRedLEDOn;
bool isGreenLEDOn;
int SPin = 0; 
void setup()
{                      
} 
void loop()                     
{ 
int reading = analogRead(SPin);  
float voltage = reading * 5.0;
voltage /= 1024.0; 
float temperatureC = (voltage - 0.5) * 100 ; 
 if (temperatureC > 50) {
    isRedLEDOn = true;
    isGreenLEDOn = false;
  } else if (temperatureC < 50) {
    isRedLEDOn = false;
    isGreenLEDOn = true;
  } else {
    isRedLEDOn = false;
    isGreenLEDOn = false;
  }
  digitalWrite(RED_LED_PIN, isRedLEDOn ? HIGH : LOW);
  digitalWrite(GREEN_LED_PIN, isGreenLEDOn ? HIGH : LOW);
  delay(1000);
}

