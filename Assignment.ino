
## Task 5 — Putting It All Together: Smart Countdown

**Question 1. Paste your final, working code.**

```cpp
int startValue = 5;
int ledPin = 13;

// Function to blink the LED
void flashLED(int times) {
  int i = 0;
  while (i < times) {
    digitalWrite(ledPin, HIGH);
    delay(300);
    digitalWrite(ledPin, LOW);
    delay(300);
    i++;
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("=== Smart Countdown Starting ===");

  int count = startValue;
  while (count > 0) {
    Serial.print("Count: ");
    Serial.println(count);
    flashLED(count);
    delay(1000);
    count = count - 1;
  }

  Serial.println("=== Countdown Complete ===");
}

void loop() {
}
```

