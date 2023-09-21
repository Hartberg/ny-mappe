const int LED_PIN = 13;


void setup(){
    Serial.begin(9600);
    pinMode(LED_PIN, OUTPUT); 

}

void loop() {

    Serial.println("A");
    delay(1000);
    digitalWrite(LED_PIN, HIGH);
    delay(100);
    digitalWrite(LED_PIN, LOW);
}