# C Calculator with Unity Tests

A CS2600 coursework exercise implementing four integer arithmetic functions in C. `calculator.c` contains the implementation, `calculator.h` declares its API, and `test_calculator.c` exercises the API through the vendored Unity test framework from Throw The Switch.

## Run the tests

Install Make and a C11 compiler, then run `make test`. Use `make clean` to remove the test executable.

## API limits

Call `add`, `subtract`, and `multiply` only when the result fits in `int`. For `divide`, the divisor must be nonzero and the quotient must fit in `int`. Integer division truncates toward zero. The API does not report invalid inputs.
