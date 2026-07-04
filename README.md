# Arduino Uno Assignment 2

## Project
Beeping Countdown Using a 7-Segment Display and Buzzer

## About the Project
This project demonstrates how an Arduino Uno controls a 7-segment display and a buzzer. The display counts down from **9 to 0**, and the buzzer beeps each time the displayed number changes.

## Components
- Arduino Uno
- 5161AS 7-Segment Display
- Buzzer
- 220 Ω Resistor
- Breadboard
- Jumper Wires
- USB Cable

## What the Project Does
- Counts down from **9 to 0**.
- Sounds the buzzer during the countdown.
- Repeats the countdown automatically.
# Assignment 1 — Arduino Fundamentals

### Variables, Functions, LEDs, while Loops & Serial Monitor

**Attipoe Eva Seyram**
Index Number: 2526400356
Programming C++ for Engineers Using Arduino — GCTU

-----

## Task 1 — Hello, Serial!

**Question 1. What is the difference between int and float? Give one example of when you would use each.**

An int, short for integer, is used to hold whole numbers without decimals, such as 19 for a person’s age. A float, on the other hand, is used to store numbers with decimal points, which is ideal for measurements like height, such as 1.72 meters.

**Question 2. What happens if you forget to write Serial.begin(9600) in setup()? Try it and explain what you observe.**

When Serial.begin(9600) is omitted, the Arduino does not set up communication with the computer, and because of that, the Serial Monitor does not display any readable data since the speed is not synchronized.

**Question 3. Why does the output appear only once and not over and over?**

The output only appears once because the printing commands are inside void setup(), which runs once when the board starts up or resets.

-----

## Task 2 — Your First Blink (Using Variables)

**Question 1. Why do we put pinMode(ledPin, OUTPUT); inside setup() and not inside loop()?**

We put it inside setup() because the pin mode only needs to be configured once when the board turns on. Putting it in loop() would be repetitive and inefficient since the pin configuration doesn’t change.

**Question 2. What would happen if we removed both delay() calls? Predict first, then try it and describe what you actually see.**

I predicted that without the delays, the LED would switch between ON and OFF incredibly fast, faster than the eye can process. Instead of seeing it blink, I observed that the LED stayed continuously lit but looked noticeably dimmer.

**Question 3. If you wanted the LED to be ON for 3 seconds and OFF for half a second, which values would you change and to what?**

I would change the value of the onTime variable to 3000 (for 3000 milliseconds) and the offTime variable to 500 (for 500 milliseconds).

-----

## Task 3 — Make It a Function

**Question 1. In your own words, explain what a parameter is.**

A parameter is like a placeholder variable that is set up when creating a function. It acts as an input slot that allows the function to receive external information. Instead of locking in a fixed value, a parameter lets us pass different data into the function every time we call it, making the code flexible.

**Question 2. Why is it useful to put repeating code into a function instead of writing it three times in loop()?**

It is useful because it keeps the code organized, easy to read, and much smaller. Writing the same code three times makes loop() cluttered and messy. By putting it into a function, the actual logic only has to be written and debugged once. If the blinking behaviour ever needs to change later, it only needs to be updated in one place instead of throughout the entire program.

**Question 3. Could you write blinkOnce without taking any parameter at all? If yes, how would you make it blink at different speeds without parameters?**

Yes, it could be written without parameters, but it would be much less efficient. To make it blink at different speeds without parameters, global variables would need to be used for the delay times, and their values would need to be manually changed before calling blinkOnce() in loop().

-----

## Task 4 — Count Down with a while Loop

**Question 1. What is the role of the line counter = counter - 1;? What would happen without it?**

The role of this line is to decrease the value of the counter variable by 1 during every iteration of the loop. It acts as the exit mechanism for the loop. Without it, the value of counter would stay at 5 forever. Because 5 is always greater than 0, the loop condition would remain true indefinitely, trapping the Arduino in an infinite loop. The program would just print “Counter is: 5” forever and never reach “Liftoff!” or flash the LEDs.

**Question 2. Rewrite the countdown to start from 7 instead of 5.**

Only the initial variable assignment needs to change:

```
int count = 7;
```

This rewrites the countdown to start from 7 instead of 5.

**Question 3. In your own words, what is the difference between setup() and a while loop? They both run code — what makes them different?**

While both are used to execute blocks of code, their fundamental purposes and behaviours are entirely different. setup() is a built-in Arduino function that automatically executes exactly once as soon as the board powers up or resets. It is not dependent on a specific condition; it simply runs its contents from top to bottom to initialise hardware and settings, then hands control over to the rest of the program. A while loop, on the other hand, is a local control structure used to repeat a specific block of code an arbitrary number of times based purely on a condition. It checks its condition before every single pass and keeps looping continuously as long as that condition evaluates to true, and it can be placed anywhere within the code, including inside setup() or loop().

-----

## Repository Files
- `Assignment2.ino` – Arduino program.
- `README.md` – Project information.

## Student
**Eva Attipoe**
