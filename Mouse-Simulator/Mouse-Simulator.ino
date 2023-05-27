const int buttonPin = 2;
const int startLED = 3;
const int testLED = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(startLED, OUTPUT);
  pinMode(testLED, OUTPUT);
  digitalWrite(startLED, HIGH);
  digitalWrite(testLED, HIGH);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    startTest();
  }
}

void startTest() {
  Serial.println("Test Started!");
  blinkLEDWithDuration(250, startLED);
  delay(250);
  for (int i = 0; i <= 20; i++) {
    blinkLEDWithDuration(50, testLED);
  }
}

void blinkLEDWithDuration(int delayTime, int pin) {
  digitalWrite(pin, LOW);
  delay(delayTime);
  digitalWrite(pin, HIGH);
  delay(delayTime);
}
