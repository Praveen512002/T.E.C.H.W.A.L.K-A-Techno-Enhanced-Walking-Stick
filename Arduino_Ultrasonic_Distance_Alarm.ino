const int pingPin = 8; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 9; // Echo Pin of Ultrasonic Sensor
const int buzzerPin = 11;  //

void setup() {
   Serial.begin(9600); // Starting Serial Terminal
   pinMode(buzzerPin, OUTPUT);
}

void loop() {
   long duration;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);

   while(duration<6000){
   Serial.println(duration);
   int i=duration/20; 
   digitalWrite(buzzerPin, HIGH);
   delay(i/2);
   digitalWrite(buzzerPin, LOW);
   delay(i);
   break;
   }
   

}
