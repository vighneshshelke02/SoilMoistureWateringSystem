// Define pins
const int soilMoisturePin = A0;  // Analog pin connected to soil sensor
const int relayPin = 2;          // Digital pin connected to relay
const int buzzerPin = 3;         // Digital pin connected to buzzer

// Threshold for dry soil (0 - 1023), lower value = wetter
const int moistureThreshold = 500;

void setup() {
  pinMode(relayPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(relayPin, HIGH);  // Relay OFF (assuming active LOW)
  digitalWrite(buzzerPin, LOW);  // Buzzer OFF
  Serial.begin(9600);
}

void loop() {
  int moistureValue = analogRead(soilMoisturePin);
  Serial.print("Soil Moisture: ");
  Serial.println(moistureValue);

  if (moistureValue > moistureThreshold) {
    // Soil is dry, turn on pump and buzzer
    digitalWrite(relayPin, LOW);   // Turn ON pump
    digitalWrite(buzzerPin, HIGH); // Turn ON buzzer
    Serial.println("Soil is dry. Watering...");
  } else {
    // Soil is wet, turn off pump and buzzer
    digitalWrite(relayPin, HIGH);  // Turn OFF pump
    digitalWrite(buzzerPin, LOW);  // Turn OFF buzzer
    Serial.println("Soil is moist.");
  }

  delay(2000); // Wait for 2 seconds before next read
}
