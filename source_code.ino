int echoPin = 7;  
int trigPin = 8;  
int LEDPin = 13;  

long duration, distance; // Duration used to calculate distance

void setup() {
 Serial.begin (9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(LEDPin, OUTPUT);  
}

void loop() {
 
 digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 

 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10); 
 
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 
  
 distance = duration/58.2;
 
 if(distance < 5)
 {
   digitalWrite(LEDPin, HIGH);
 }
 if(distance > 5)
 {
   digitalWrite(LEDPin, LOW);
 }
 
}

