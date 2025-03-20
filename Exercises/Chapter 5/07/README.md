### Exercise

What does the following statement print if i has the value 17? What does it print if i has the value -17?

```
printf("%d\n", i >= 0 ? i : -i);
```

### Answer

i = 17
```
"17
"
```

i = -17
```
"17
"
```
Because -(-17) is 17.
