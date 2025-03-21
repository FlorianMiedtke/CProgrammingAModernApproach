### Exercise

Is the following if statement legal?

```
if (n == 1-10)
    printf("n is between 1 and 10\n");
```

If so, what does it do when n is equal to 5?

### Answer

The statement is legal, but it does not tell us, if n is between 1 and 10. Since 1-10 is always -9, the printf is only executed, if n equals -9.

If n is equal to 5, the printf statement is not executed, since the expression solves as follows:
```
5 == 1-10

//Step 1
5 == -9

//Step 2
0
```
Since 5 does not equal to -9, the printf statement is not executed.
