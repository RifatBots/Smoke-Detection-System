#define gasSensor A0
#define buzzer 10
#define ledGreen 3
#define ledRed 2
#define HIGH 600

void setup() {

   //Initialising all pins
   
   pinMode(gasSensor, INPUT);
   pinMode(buzzer, OUTPUT);
   pinMode(ledGreen, OUTPUT);
   pinMode(ledRed, OUTPUT);
   Serial.begin(9600);
  }

void loop() {
  //Read data from the sensor
int gas_value = analogRead(gasSensor);
Serial.println(gas_value);

//check data from sensor if there is smoke, if will execute otherwise else will execute
if(gas_value > 28)
{
  tone(buzzer,1000,500);
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledGreen,LOW);
  
  
}
else
{
  noTone(buzzer);
  digitalWrite(ledGreen,HIGH);
  digitalWrite(ledRed, LOW);
}
delay(200);
  
}