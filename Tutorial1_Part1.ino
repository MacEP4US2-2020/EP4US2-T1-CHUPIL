//Define LED pins, and count variable
int led6 = 5;
int led7 = 18;
int led8 = 19;
int count = 1;

//Set each pin to output
void setup() {
pinMode (led6, OUTPUT);
pinMode (led7, OUTPUT);
pinMode (led8, OUTPUT);
}
void loop() {
//Turn each LED on, then off, and repeat sequence 3 more times
while (count<4){
  digitalWrite(led6, HIGH);
  delay(2000);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(2000);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(2000);
  digitalWrite(led8, LOW);
  delay(1000);
  count = count + 1;
} 
//Turn every LED on and off at the same time once to end the sequence
while (count<5){
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  delay(1000);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  delay(1000);
  count = count+1;
}
}
