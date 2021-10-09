//This code is based on the example "foo".
//Authors:
//  Bernardo Koefender            - @BernardoKoefender
//  Frederico Arnaldo Ballve Neto - @fredballve
//  Willian Analdo Nunes          - @Willian-Nunes

#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Payment)
{
  RUN_TEST_CASE(Payment, TestPayment1);
}
