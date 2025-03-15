### Project

Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3*pi*r^3. Write the fraction 4/3 as 4.Of/3.Of. (Try writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice to compute r^3.


### Answer

Writing 4/3 will result in an int value. 4/3 equals to 1,33333.... Since int has no decimal places, the value will just be 1. This leads to a wrong result.
