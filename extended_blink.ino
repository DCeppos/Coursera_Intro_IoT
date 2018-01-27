/* Extended Blink 
 *  
 *  This is a practice problem from Coursera's Programming the Internet of Things Specialization, 
 *  offered by the Univeristy of California Irvine.
 *  
 *  INSTRUCTIONS: 
 *  Write a program that causes the built-in LED connected to pin 13 on the Arduino to blink, 
 *  alternating between fast blinks and slow blinks. The LED should blink 5 times, once every half 
 *  second, and then it should blink 5 more times, once every two seconds. The LED should continue 
 *  to blink in this alternating fashion for as long as the Arduino receives power.
 */


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int i=0; i<5; i++){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
  }

 for (int j=0; j<5; j++){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(2000);
    digitalWrite(LED_BUILTIN, LOW);
    delay(2000);
  }



}
