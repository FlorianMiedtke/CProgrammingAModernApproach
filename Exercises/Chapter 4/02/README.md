### Exercise

If i and j are positive integers, does (-i)/j always have the same value as -(i/j) ? Justify your answer.

### Answer

It does not always have the same value. When negative operands are used in a division or modulo in C, the result can be either rounded up, or down. Only since C99, the outcome is defined to be truncated towards zero.
