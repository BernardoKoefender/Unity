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

TEST(Identifier, TestIdentifier1)
{
  TEST_ASSERT_EQUAL(0, identifier("ABCDEF\n"));
  TEST_ASSERT_EQUAL(0, identifier("A2\n"));
  TEST_ASSERT_EQUAL(0, identifier("A2sdf\n"));
  TEST_ASSERT_EQUAL(0, identifier("fdsdf\n"));
}

TEST(Identifier, TestIdentifier2)
{
  TEST_ASSERT_EQUAL(1, identifier("ABCDEFG\n"));
  TEST_ASSERT_EQUAL(1, identifier("2A\n"));
  TEST_ASSERT_EQUAL(1, identifier("AS%3\n"));
}
