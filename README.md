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

4. Write your tests. You can let a test fail by calling the `fail(errormessage)` function of the `testmanager`. The `errormessage` you pass to the `fail()` function, is the message that will be displayed when something goes wrong in that particular function.

5. Run your tests! If everything is ok, you will see the message: `All tests passed. OK`. Else, you will probably see an error message you provided and an `Not all tests passed. FAILED` message.

---

