#include "identifier.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Identifier);

TEST_SETUP(Identifier)
{
}

TEST_TEAR_DOWN(Identifier)
{
}

TEST(Identifier, EquivalenceClasses)
{
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("A"), "Test 1 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("cB3t2"), "Test 2 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("G2"), "Test 3 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("GE6A2F1"), "Test 4 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("D3%_"), "Test 5 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("2ASD"), "Test 6 failed.");
}

TEST(Identifier, LimitValues)
{
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier(""), "Test 7 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("AB3DE4"), "Test 8 failed.");
}

TEST(Identifier, ConditionCoverage)
{
  // valid_s
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("@A"), "Test 9 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("ZB"), "Test 10 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("[C"), "Test 11 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("aD"), "Test 12 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("`E"), "Test 13 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("zF"), "Test 14 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("{G"), "Test 15 failed.");
  // valid_f
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("AA"), "Test 16 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("B@"), "Test 17 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("CZ"), "Test 18 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("D["), "Test 19 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("Ea"), "Test 20 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("F`"), "Test 21 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("Gz"), "Test 22 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("H["), "Test 23 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("I0"), "Test 24 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("J/"), "Test 25 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("K9"), "Test 26 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("L:"), "Test 27 failed."); 
}

TEST(Identifier, OtherTests)
{
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("\n"), "Test 28 failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("\0"), "Test 29 failed.");
}
