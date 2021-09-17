/*  @Author: Lloyd Thomas
    @Date: 17/09/2021
    @Version: 1.0
    @Title: Traffic Light System
*/


// LED board indexes
const int LED_RED = 0;
const int LED_YELLOW = 1;
const int LED_GREEN = 2;

// Time between LED's changing in state
const int MILLI = 10000;
const int MILLI_SHORT = 125;


// Add devices to board
void setup() {
    /*  Red, yellow & green traffic lights:
        -----------------------------------
        Using LED's of these colours, apply them
        to the board indexes so that they can be accessed
        in the program loop.
    */

    // Apply indexes to pins
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_YELLOW, OUTPUT);
    pinMode(LED_GREEN, OUTPUT); 
}


// Main circuit loop
void loop() {
    /*  START:
        ------
        The initial loop will ensure that
        the LED's light up and turn off in 
        the correct order & at the right times,
        while using the correct timing in between
        state changes.
    */
    
    
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
    
    
    /*  END OF LOOP 
        -----------
    */
}
