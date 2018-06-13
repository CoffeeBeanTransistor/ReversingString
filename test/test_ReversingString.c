#include "unity.h"
#include "ReversingString.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_getStringLength_given_a_NULL_expect_0 (void) {
	TEST_ASSERT_EQUAL (0, getStringLength(NULL));
}

void test_getStringLength_given_an_empty_string_expect_0 (void) {
	TEST_ASSERT_EQUAL (0, getStringLength(""));
}

void test_getStringLength_given_a_f_string_expect_1 (void) {
	TEST_ASSERT_EQUAL (1, getStringLength("f"));
}

void test_getStringLength_given_mumbo_jumbo_string_expect_11 (void) {
	TEST_ASSERT_EQUAL (11, getStringLength("mumbo-jumbo"));
}

void test_ReversingString_given_framework_expect_krowemarf(void)
{
  char *str = ReversingString("123456");
	TEST_ASSERT_EQUAL_STRING ("654321", str);
}