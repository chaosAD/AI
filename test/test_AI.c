#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "unity.h"
#include "AI.h"

void setUp(void) {}

void tearDown(void) {}

void test_stringCompare_Given_Hello_and_Hello_expect_1(void) {
  TEST_ASSERT_EQUAL(stringCompare("Hello", "Hello"), 1);
}

void test_stringCompare_Given_MaMbo_juMbO_and_mambo_Jumbo_expect_1(void) {
  TEST_ASSERT_EQUAL(stringCompare("MaMbo juMbO", "mambo Jumbo"), 1);
}

void test_stringCompare_Given_Rambo_and_Rambu_expect_0(void) {
  TEST_ASSERT_EQUAL(stringCompare("Rambo", "Rambu"), 0);
}

void test_stringCompare_Given_Hello_and_Hell_expect_0(void) {
  TEST_ASSERT_EQUAL(stringCompare("Hello", "Hell"), 0);
}

void test_stringCompare_Given_Hell_and_Hello_expect_0(void) {
  TEST_ASSERT_EQUAL(stringCompare("Hell", "Hello"), 0);
}

void test_speakToAiMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void) {
  char *expectedReply = "Hi there! My name is TheMachine. What is yours?";
  char *reply = speakToAiMachine("hi");
  TEST_ASSERT_NOT_NULL(reply);
  TEST_ASSERT_EQUAL(strlen(reply), strlen(expectedReply));
  TEST_ASSERT_EQUAL_STRING(reply, expectedReply);
  free(reply);
}

void test_speakToAiMachine_Given_Hello_Hi_Hey_Greetings_expect_Hi_there_my_name_is_themachine_What_is_yours(void) {
  int len;
  char *str = "killbo   somba    bomba", *myStr = &str[6];
  char *substr = getWord(&myStr, &len);
  TEST_ASSERT_NOT_NULL(substr);
  TEST_ASSERT_EQUAL_ARRAY(substr, &str[6]);
}


 

