### Exercise

Show how to modify the addfrac.c program of Section 3.2 so that the user is allowed to enter fractions that contain spaces before and after each / character.

### Answer

```
scanf("%d/%d", &num1, &denom1);
```

needs to be modified as follows:
```
scanf("%d /%d", &num1, &denom1);
```

Because of the added space character in the format string, scanf now skips all whitespace characters until the next non-space character. This is not needed after the / because %d already skips all leading whitespaces.

(See addfrac_Exercise.c)
