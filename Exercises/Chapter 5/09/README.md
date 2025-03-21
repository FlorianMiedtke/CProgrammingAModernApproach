### Exercise

Are the following if statements equivalent? If not. why not?

```
if (score >= 90)        if (score < 60)
    printf("A");             printf("F");
else if (score >= 80)   else if (score < 70)
    printf("B");             printf("D");
else if (score >= 70)   else if (score < 80)
    printf("C");             printf("C");
else if (score >= 60)   else if (score < 90)
    printf("D")              printf("B");
else                    else
    printf("F");             printf("A");
```

### Answer

The statements are equivalent. If the score one the left example would be ascending, or the score on the right example would be descending, it would not have worked.
