CC ?= cc
CFLAGS ?= -std=c11 -Wall -Wextra -Wpedantic

.PHONY: test clean

test: test_runner
	./test_runner

test_runner: calculator.c calculator.h test_calculator.c unity.c unity.h unity_internals.h
	$(CC) $(CPPFLAGS) $(CFLAGS) calculator.c test_calculator.c unity.c $(LDFLAGS) $(LDLIBS) -o $@

clean:
	$(RM) test_runner
