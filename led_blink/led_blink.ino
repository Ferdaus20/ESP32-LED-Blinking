
// #define LED_PIN 26
// #define LED_PIN1 33
// void setup() {
//   pinMode(LED_PIN, OUTPUT);
//   pinMode(LED_PIN1, OUTPUT);
// }

// void loop() {
//   digitalWrite(LED_PIN, HIGH);
//   delay(1000);

//   digitalWrite(LED_PIN, LOW);
//   delay(1000);

//   digitalWrite(LED_PIN1, HIGH);
//   delay(1000);

//   digitalWrite(LED_PIN1, LOW);
//   delay(2000);
// }
#define LED_PIN 26
#define LED_PIN1 33

#define LED_PIN2 22
#define LED_PIN3 23

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN1, OUTPUT);

  pinMode(LED_PIN2, OUTPUT);
  pinMode(LED_PIN3, OUTPUT);
}

void loop() {
  // Turn BOTH lights ON at the same time
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(LED_PIN1, HIGH);
  delay(1000); // Wait 1 second

  // Turn BOTH lights OFF at the same time
  // digitalWrite(LED_PIN, LOW);
  // digitalWrite(LED_PIN1, LOW);
  // delay(1000); // Wait 1 second


    // Turn BOTH lights ON at the same time
  digitalWrite(LED_PIN2, HIGH);
  digitalWrite(LED_PIN3, HIGH);
  delay(1000); // Wait 1 second

  digitalWrite(LED_PIN, LOW);
  digitalWrite(LED_PIN1, LOW);
  delay(1000); // Wait 1 second


  // Turn BOTH lights OFF at the same time
  digitalWrite(LED_PIN2, LOW);
  digitalWrite(LED_PIN3, LOW);
  delay(1000); // Wait 1 second
}
