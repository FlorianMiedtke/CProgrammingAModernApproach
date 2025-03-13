### Exercise

Create and run Kernighan and Ritchie's famous "hello, world" program:

```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```

Do you get a warning message from the compiler? If so, what’s needed to make it go away?

### Answer

Using "gcc -O -Wall -W -pedantic -ansi -std=c99 -o helloWorld helloWorld.c", I do not get any errors or warnings.