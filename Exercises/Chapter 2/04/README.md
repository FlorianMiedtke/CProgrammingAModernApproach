### Exercise

Write a program that declares several int and float variables—without initializing them—and then prints their values. Is there any pattern to the values? (Usually there isn’t.)

### Answer

Compiling gives warnings, that variables are unintialized.

Using
```
gcc -O -Wall -W -pedantic -ansi -std=c99 -o chapter2Exercise4 chapter2Exercise4.c
```
the values of the variables are all 0.

See chapter2Exercise4.c
