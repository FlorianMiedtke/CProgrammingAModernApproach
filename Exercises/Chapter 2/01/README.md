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

Using "gcc -O -Wall -W -pedantic -ansi -std=c89 -o helloWorld helloWorld.c" gives the message:
```
helloWorld.c: In function ‘main’:
helloWorld.c:6:1: warning: control reaches end of non-void function [-Wreturn-type]
    6 | }
      | ^
```

This is fixed by returning 0. (See helloWorldFix.c)
