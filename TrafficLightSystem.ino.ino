const int LED_RED = 0;
const int LED_YELLOW = 1;
const int LED_GREEN = 2;

const int MILLI = 10000;
const int MILLI_SHORT = 125;


void setup() {  
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_YELLOW, OUTPUT);
    pinMode(LED_GREEN, OUTPUT); 
}


void loop() {
    // Red On
    digitalWrite(LED_RED, HIGH);
    delay(MILLI);
  
    // Amber/Yellow On
    digitalWrite(LED_YELLOW, HIGH);
    delay(MILLI);
  
    // Red & Amber Off
    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_YELLOW, LOW);
  
    // Green On
    digitalWrite(LED_GREEN, HIGH);
    delay(MILLI);

    // Amber On, Green Off
    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_YELLOW, HIGH);
    delay(MILLI);
  
    // Amber off
    digitalWrite(LED_YELLOW, LOW);
    delay(MILLI_SHORT);
}
