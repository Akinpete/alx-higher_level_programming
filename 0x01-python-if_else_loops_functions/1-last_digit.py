#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)

lastN = abs(number) % 10
if number < 0:
    lastN = lastN * -1

if lastN > 5:
    print(f"Last digit of {number} is {lastN} and is greater than 5")
elif lastN == 0:
    print(f"Last digit of {number} is {lastN} and is 0")
else:
    print(f"Last digit of {number} is {lastN} and is less than 6 and not 0")
