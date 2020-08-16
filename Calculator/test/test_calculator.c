#include "unity.h"
#include "calculator.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_add(void)
{
  TEST_ASSERT_EQUAL(9, calculator(0,4,5));
  TEST_ASSERT_EQUAL(16, calculator(0,6,10));
  TEST_ASSERT_EQUAL(-4, calculator(0,-3,-1);
	
}
void test_sub(void)
{
  TEST_ASSERT_EQUAL(5, calculator(1,7,2));
  TEST_ASSERT_EQUAL(10, calculator(1,14,4));
  TEST_ASSERT_EQUAL(-2, calculator(1,10,12);
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_sub);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
