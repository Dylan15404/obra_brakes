// Define pins for relay module
const int actuatorpin1 = 9; // Relay 1 for forward motion
const int actuatorpin2 = 10; // Relay 2 for reverse motion

// Define pin for pressure sensor
const int pressureSensorPin = A0; // Analog input pin for pressure sensor

void setup() {
  // Initialize the relay pins as outputs
  pinMode(actuatorpin1, OUTPUT);
  pinMode(actuatorpin2, OUTPUT);
  
  Serial.begin(9600);
  
  // Ensure relays are off at start
  digitalWrite(actuatorpin1, LOW);
  digitalWrite(actuatorpin2, LOW);
}

int readpressure(){
  return analogRead(pressureSensorPin);
}

void actuatorforward(){
  digitalWrite(actuatorpin1, HIGH);
  digitalWrite(actuatorpin2, LOW);
}

void actuatorbackward(){
  digitalWrite(relayPin1, LOW);
  digitalWrite(relayPin2, LOW);
}

void loop() {
  

}
