### Exercise

Which one of the following statements is not equivalent to the other two (assuming that the loop bodies are the same)?

```
(a) for (i = 0; i < 10; i++) ...
(b) for (i = 0; i < 10 ; ++i) ...
(c) for (i = 0; i++ < 10; ) ...
```

### Answer

(c) is not equivalent. (a) and (b) evaluate the loop condition before `i` is incremented. (c) increments `i` and then evaluates the loop condition afterwards.