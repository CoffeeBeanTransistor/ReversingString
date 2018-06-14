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

void test_getStringLength_given_John_Smith_ate_an_apple_string_expect_24 (void) {
	TEST_ASSERT_EQUAL (24, getStringLength("John Smith ate an apple."));
}

void test_ReversingString_given_framework_expect_krowemarf(void)
{
  char *str = ReversingString("framework");
	TEST_ASSERT_EQUAL_STRING ("krowemarf", str);
}

void test_ReversingString_given_2plus2equfour_expect_fourequ2plus2 (void)
{
  char *str = ReversingString("2+2=4");
	TEST_ASSERT_EQUAL_STRING ("4=2+2", str);
}

void test_ReversingString_given_Good_Morning_dot_exe_expect_exe_dot_gninroM_dooG (void)
{
  char *str = ReversingString("Good Morning.exe");
	TEST_ASSERT_EQUAL_STRING ("exe.gninroM dooG", str);
}
