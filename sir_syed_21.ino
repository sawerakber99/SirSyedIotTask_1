int LED = A1;
const int gas = 0;
int MQ2pin = A0;

void setup(){
	Serial.begin(9600);
}
void loop(){
	float sensorValue,MQ2pin;
  	sensorValue = analogRead(MQ2pin);
  if(sensorValue<=95)
  {
  	digitalWrite(LED,LOW);
    Serial.println(sensorValue);
  }
  else{
  	digitalWrite(LED,HIGH);
    Serial.println("Smoke Detected");
    Serial.println("Sensor Value: ");
    Serial.println(sensorValue);
  }
  delay(2000);
}
	float getsensorValue(int pin)
    {
	return(analogRead(pin));
}