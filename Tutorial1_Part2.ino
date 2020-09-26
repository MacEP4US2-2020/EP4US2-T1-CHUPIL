#include <String> //library
#include <DHT.h> //DHT-11 library

#define DHTPIN 4 //define pin that the DHT is connected to
#define DHTTYPE DHT11 //define the type of DHT sensor (DHT-11)
DHT dht(DHTPIN, DHTTYPE); //object declaration constructor

void setup() {
  Serial.begin(9600); //Open serial port and set speed
  //DHT-11 Initialization
  dht.begin();
  pinMode(0,OUTPUT); //Set pin 0 to output for light sensor
}

void loop() {

  //Read DHT-11 Data
  
  //Read humidity as percentage
  float h = dht.readHumidity();
  
  //Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  
  //Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

  //Print data to serial monitor
  Serial.println("Humidity: " + String(h)); 
  Serial.println("Temperature C: " + String(t));
  Serial.println("Temperature F: " + String(f));
  Serial.println(analogRead(0)); //Reading and printing light sensor data
}
