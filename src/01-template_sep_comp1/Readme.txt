Example for template seperate-compilation.

Actually, normal way to compile templated-class like this 'SampleClass' requires
'#include "SampleClass.cpp"'

However, I thought that is non-sense because that makes compile speed slower(No advantage of parallelism from seperate compile.)
So, I used the principle of Template's compile.

In dummy function, there are all functions called in main function.
This makes compiler also compile definition of those functions(and class of those member functions).