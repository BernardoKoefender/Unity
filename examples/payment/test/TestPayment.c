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
  TEST_ASSERT_EQUAL(0, payment(0.01, (char*)"regular"));
  TEST_ASSERT_EQUAL(0, payment(99999.00, (char*)"estudante"));
  TEST_ASSERT_EQUAL(0, payment(89.77, (char*)"VIP"));
  TEST_ASSERT_EQUAL(0, payment(132.57, (char*)"aposentado"));
}

TEST(Payment, TestPayment2)
{
  TEST_ASSERT_EQUAL(1, payment(-0.01, (char*)"VIP"));
  TEST_ASSERT_EQUAL(1, payment(0.00, (char*)"regular"));
  TEST_ASSERT_EQUAL(1, payment(99999.01, (char*)"estudante"));
  TEST_ASSERT_EQUAL(1, payment(999999.53, (char*)"VIP"));
}

TEST(Payment, TestPayment3)
{
  TEST_ASSERT_EQUAL(2, payment(45.30, (char*)"Aregular"));
  TEST_ASSERT_EQUAL(2, payment(332.10, (char*)"regulara"));
  TEST_ASSERT_EQUAL(2, payment(1132.50, (char*)""));
  TEST_ASSERT_EQUAL(2, payment(25000.30, (char*)"idfgjapeçiokmgvalfkgjari**jgk$$/mfagmçalcbma@ekpotŕitoṕowekffla,mçvak$dnçglasngaçv,#;.mafga4p3353p3kr-"));
  TEST_ASSERT_EQUAL(2, payment(33.00, NULL));
}