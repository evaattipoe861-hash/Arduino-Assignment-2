
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

**Question 2. Describe one bug or mistake you ran into while writing this program and how you fixed it.**

One mistake I ran into was mixing up the variable names between the loop in setup() and the loop inside flashLED(). I initially used count in both places, which made the code confusing to read and harder to debug. I fixed it by renaming the counter inside flashLED() to i, keeping it clearly separate from the outer count variable in setup().

**Question 3. If you wanted the program to count DOWN by 2 each step (5, 3, 1) instead of by 1, what would you change?**

Inside the while loop, the line count = count - 1; would be changed to count = count - 2;. This would make the counter decrease by two on each pass, producing the sequence 5, 3, 1.

**Question 4. If you wanted the LED to also stay ON for a final 5 seconds after the countdown completes, where in the code would you add this and what would the code look like?**

This would be added after the while loop finishes but before (or after) the “=== Countdown Complete ===” message is printed, inside setup(). The code would look like this:

```cpp
Serial.println("=== Countdown Complete ===");
digitalWrite(ledPin, HIGH);
delay(5000);
digitalWrite(ledPin, LOW);
```
