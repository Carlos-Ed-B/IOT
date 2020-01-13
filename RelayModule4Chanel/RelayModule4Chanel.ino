int ch = 4;// number of relays you got
int relay[]={2,3,4,5}; //{2,3,4,5}; Arduino pin numbers. the same number of relay should be defined here as input pins


int wait = 2000;// delay time
int i=0;

void setup() {
  
  
    Serial.begin(9600);// prepare Serial monitor

    Serial.println("");
    Serial.println("Init");
    // set  pins as output
 for(i=0; i < ch; i++)
 {    
    pinMode(relay[i], OUTPUT);// sent i(th) pin as output
    Serial.print(relay[i]);
    Serial.println(" output");
    digitalWrite(relay[i], HIGH); // Turn the relay OFF  
 }
    Serial.println("Relay Test");
}

void loop() {
Serial.println("====== loop init ==");    
 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); 
      Serial.print(i+1);
      Serial.print(" ON ");
      Serial.println(relay[i]);
      digitalWrite(relay[i], LOW); // Turn the relay ON    
      delay(wait);  
 }// for loop


 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); 
      Serial.print(i+1);
      Serial.print(" OFF ");
      Serial.println(relay[i]);
      digitalWrite(relay[i], HIGH); // Turn the relay OFF    
      delay(wait);  
 }// for loop
    Serial.println("====== loop end ==");

}// loop
