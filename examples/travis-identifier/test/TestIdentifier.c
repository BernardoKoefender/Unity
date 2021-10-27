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
  
  // pelo menos um desses testes aumentam o "taken at least once", por que?
  //TEST_ASSERT_EQUAL_MESSAGE(1, identifier("ABCDEFG\n"), "Test ? failed.");
  //TEST_ASSERT_EQUAL_MESSAGE(1, identifier("2A\n"), "Test ? failed.");
  //TEST_ASSERT_EQUAL_MESSAGE(1, identifier("AS%3\n"), "Test ? failed.");
}

TEST(Identifier, ConditionCoverage)
{
  // could be considered also as a limit value test of valid_s and valid_f
  // valid_s
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("@A"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("ZB"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("[C"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("aD"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("`E"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("zF"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("{G"), "Test ? failed.");

  // valid_f
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("AA"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("B@"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("CZ"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("D["), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("Ea"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("F`"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("Gz"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("H["), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("I0"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("J/"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(0, identifier("K9"), "Test ? failed.");
  TEST_ASSERT_EQUAL_MESSAGE(1, identifier("L:"), "Test ? failed.");
  
}