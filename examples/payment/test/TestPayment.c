//This code is based on the example "foo".
//Authors:
//  Bernardo Koefender            - @BernardoKoefender
//  Frederico Arnaldo Ballve Neto - @fredballve
//  Willian Analdo Nunes          - @Willian-Nunes

#include "payment.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Payment);

TEST_SETUP(Payment)
{
}

TEST_TEAR_DOWN(Payment)
{
}

TEST(Payment, TestPayment1)
{
  // All of these should pass
  TEST_ASSERT_EQUAL(-2, payment(1,2));
  TEST_ASSERT_EQUAL(-1, payment(2,2));
}

TEST(Payment, TestPayment2)
{
  // This test will fail
  TEST_ASSERT_EQUAL(2, foo(1,2));
}
