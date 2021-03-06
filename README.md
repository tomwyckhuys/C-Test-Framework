C-Test-Framework
====================
> - Testing framework for the C language!
> - Currently working with a calculator example
> - **Really basic, do not use this in production applications..**

Documentation
--------------
1. Download the `testmanager.c` and the `testmanager.h` files.

2. Create a `tests.c` file. This is the file where you will be creating tests.

3. Include the `testmanager.h` file in the `tests.c` file.
> `#include "testmanager.h"`

4. Write your tests. You can let a test fail by calling the `assertTrue(errormessage, booleanCondition)` function of the `testmanager`. The `errormessage` you pass to the `assertTrue()` function, is the message that will be displayed when something goes wrong in that particular function.

5. Run your tests! If everything is ok, you will see the message: `All tests passed. OK`. Else, you will probably see an error message you provided and an `Not all tests passed. FAILED` message.

---

Methods
---------
> `assertTrue(char[], int)` Tests against the provided boolean condition.
> `writeResults()` Prints the test result and error messages to the screen.

---

Examples
--------
####A simple test
```C
void myTestFunction() {
  int result = sum(4, 5);
  assertTrue("myTestFunction() failed.. Expected other value", result == 9);
}
```

####Complete file
> tests.c

```C
#include "testmanager.h"
int main();
void myTestFunction();

int main() {
  myTestFunction();
  
  writeResults();
  return 0;
}

void myTestFunction() {
  int result = sum(4, 5);
  assertTrue("myTestFunction() failed.. Expected other value", result == 9);
}
```
