### Exercise

For each of the following pairs of scanf format strings, indicate whether or not the two strings are equivalent. If they're not. show how they can be distinguished.

(a) "%d" versus " %d"
(b) "%d-%d-%d" versus "%d -%d -%d"
(c) "%f" versus "%f "
(d) "%f,%f" versus "%f, %f"

### Answer

(a) Equivalent

(b) Not equivalent
Since scanf accepts any number of whitespaces for a whitespace in the format string, even zero, the format strings are equivalent for an input in the format "8-9-10".

But only "%d -%d -%d" can read "8 -9 -10". So they do not have the exact same behaviour.

For example input string "8 -9 -10" and format string "%d-%d-%d":
scanf expects an integer number and finds 8. The next character is a whitespace, but it expects a minus. So scanf aborts.
If the input string would have been "8- 9- 10" the string would have been read properly.

scanf only ignores whitespaces BEFORE the next number, not AFTER a number it currently reads. Thats why %d-%d-%d" and "%d -%d -%d" are not equivalent. Only %d-%d-%d" and "%d- %d- %d" would have been equivalent.

(c) Not Equivalent
A trailing whitespace causes scanf to skip the whitespace and look for a non whitespace character. The program appears to "hang" until the next user input.

(d) Equivalent
This is equivalent, because scanf ignores whitespace searching for a number. So it ignores all whitespace before a number.

For example the input string "1.1, 2.2":
scanf expects a float number. it reads 1.1 and finds a comma. It puts the comma back and stores 1.1 in a variable. It then expects a comma. It finds the comma and continues. It ignores all whitespaces until the next number, which is 2.2. Which is also stored in a variable.
Because of this, it does not matter if there is whitespace after the comma in the format string.

"%f,%f" and "%f, %f" are equivalent, because the whitespace is directly infront of the next number. "%f,%f" and "%f ,%f" would not have been equivalent, because the whitespaces is after a number and not directly before a number, thus it is not ignored. (Same problem as in (b)).
