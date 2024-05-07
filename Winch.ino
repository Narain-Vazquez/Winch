int in1 = 6;
int in2 = 7;
int jetsonPin = 8;
int ena = 5;


void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(jetsonPin, INPUT);
  pinMode(ena, OUTPUT);
  Serial.begin(9600);
}


void clockWise() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(ena, 125);
}


void counterClockWise() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(ena, 125);
}


void stopMotor() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(ena, 0);
}
 
void loop() {
  int jetsonOn = digitalRead(jetsonPin);
 
  if (jetsonOn) {
    Serial.println("turn on motor");
    clockWise();
  }
  else {
    Serial.println("turn off motor");
    stopMotor();
  }
  delay(100);
}
 



