/*User Controlled Blink
 * 
*  This is a practice problem from Coursera's Programming the Internet of Things Specialization, 
 *  offered by the Univeristy of California Irvine.
 *  
 *  INSTRUCTIONS: 
 *  Write a program that allows the user to control the LED connected to pin 13 of the Arduino. 
 *  When the program is started, the LED should be off. The user should open the serial monitor 
 *  to communicate with the Arduino. If the user sends the character '1' through the serial monitor 
 *  then the LED should turn on. If the user sends the character '0' through the serial monitor 
 *  then the LED should turn off.
 *  
 *  
 */


int serval;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Enter 1 or 0");
  Serial.println(" ");
  delay(5000);
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

if (Serial.available() > 0){
  serval = Serial.read(); 
  Serial.print("Input Received: ");
  Serial.print(char(serval));
  Serial.println(" ");

   
    if(serval=='1'){
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("You turned the light on!");
      Serial.println("Enter 0 to turn it off.");
      Serial.println(" "); 
      delay(15000);  
      }
    else{
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("The light is off.");
      Serial.println("Enter 1 to turn it on.");
      Serial.println(" ");
      delay(15000);
      }
 }
else{
 Serial.println("Enter 1 or 0");
  Serial.println(" ");
  delay(5000);
  }

}
