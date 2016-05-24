C-Test-Framework
====================
> - Testing framework for the C language!
> - Currently working with a calculator example
> - **Really basic, do not use this in production applications..**

Documentation
--------------
#####1. Download the _*testmanager.c*_ and the _*testmanager.h*_ files.

#####2. Create a _*tests.c*_ file. This is the file where you will be creating tests.

#####3. Include the _*testmanager.h*_ file in the _*tests.c*_ file.
> `#include "testmanager.h"`

#####4. Write your tests. You can let a test fail by calling the `fail(errormessage)` function of the *testmanager*. The `errormessage` you pass to the `fail()` function, is the message that will be displayed when something goes wrong in that particular function.

#####5. Run your tests! If everything is ok, you will see the message: `All tests passed. OK`. Else, you will probably see an error message you provided and an `Not all tests passed. FAILED` message.

---

