import math as m
from turtle import *

def hearta(k):
    return 15 * m.sin(k)**3

def heartb(k):
    return 12 * m.cos(k) - 5 * m.cos(2 * k) - 2 * m.cos(3 * k) - m.cos(4 * k)

speed(0)  # Set drawing speed to fastest
bgcolor("black")  # Set background color to black

for i in range(10000):  # Loop for drawing points
    goto(hearta(i) * 20, heartb(i) * 20)  # Calculate and move turtle
    color("#f73487")  # Set color to pink
    goto(0, 0)  # Return to center
done() 