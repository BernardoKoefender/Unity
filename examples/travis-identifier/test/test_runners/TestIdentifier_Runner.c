#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Identifier)
{
  RUN_TEST_CASE(Identifier, EquivalenceClasses);
  RUN_TEST_CASE(Identifier, LimitValues);
  RUN_TEST_CASE(Identifier, ConditionCoverage);
  RUN_TEST_CASE(Identifier, OtherTests);
}
