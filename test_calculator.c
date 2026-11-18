#include "unity.h"
#include "calculator.h"
#include <limits.h>

// Runs BEFORE each test
void setUp(void) {
}

// Runs AFTER each test
void tearDown(void) {
}

// Test positive numbers
void test_add_positive_numbers(void) {
    TEST_ASSERT_EQUAL(5, add(2, 3)); // 2 + 3 = 5
}

// Test positive and negative numbers
void test_add_positive_and_negative_numbers(void) {
    TEST_ASSERT_EQUAL(1, add(5, -4)); // 5 + (-4) = 1
}

// Test negative numbers
void test_add_negative_numbers(void) {
    TEST_ASSERT_EQUAL(-7, add(-3, -4)); // -3 + -4 = -7
}

// Test adding zero
void test_add_zero(void) {
    TEST_ASSERT_EQUAL(5, add(5, 0)); // 5 + 0 = 5
}

void test_add_representable_boundaries(void) {
    TEST_ASSERT_EQUAL_INT(INT_MAX, add(INT_MAX - 1, 1));
    TEST_ASSERT_EQUAL_INT(INT_MIN, add(INT_MIN + 1, -1));
}

void test_divide_truncates_toward_zero(void) {
    TEST_ASSERT_EQUAL_INT(-2, divide(-5, 2));
    TEST_ASSERT_EQUAL_INT(-2, divide(5, -2));
}

void test_subtract(void) {
    TEST_ASSERT_EQUAL(3, subtract(5, 2));
}

void test_multiply(void) {
    TEST_ASSERT_EQUAL(10, multiply(5, 2));
}

void test_divide(void) {
    TEST_ASSERT_EQUAL(2, divide(10, 5));
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_add_positive_numbers);
    RUN_TEST(test_add_positive_and_negative_numbers);
    RUN_TEST(test_add_negative_numbers);
    RUN_TEST(test_add_zero);
    RUN_TEST(test_add_representable_boundaries);
    RUN_TEST(test_subtract);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);
    RUN_TEST(test_divide_truncates_toward_zero);
    return UNITY_END();
}
