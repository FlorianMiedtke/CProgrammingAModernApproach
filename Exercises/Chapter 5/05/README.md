### Exercise

Is the following if statement legal?

```
if (n >= 1 <= 10 )
    printf("n is between 1 and 10\n");
```

If so, what does it do when n is equal to 0?

### Answer

The statement is legal. But it does not check if n is between 1 and 10.

Lets use the example n = 0 from the exercise. We now have:
```
0 >= 1 <= 10
```
Since the operators are left-associative, this could be written as:
```
((0 >= 1) <= 10)
```
Which solves as follows:
```
((0 >= 1) <= 10)

//Result:
0 <= 10

//Result:
1
```
Since 0 >= 1 solves as 0, and 0 <= 10 solves as 1, the if statement would tell us, that 0 is between 1 and 10, which is wrong.
