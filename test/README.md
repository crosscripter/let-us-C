# Test
### Better testing with C

I had *fun* with C macros and wrote my own assert style macro called test.
Cause when you're in C it's *fun* to reinvent the wheel 🙃

## Example Usage
`test` takes a condition (which returns _bool_ aka. int) and a message
if the condition is not met, your program halts and displays the message
in a nicely formatted way:

```C
#include <string.h>
// ...
const char *hello = "Hello";
test(strlen(hello) == strlen("Hello!"), "String should be length of 5");
```
Because we compared to the wrong string above, an error message is printed out:
```bash
Test failed (testing.c:30 @ main): String should be length of 5
30 |  strlen(hello) == strlen("Hello!")
      ^
```
