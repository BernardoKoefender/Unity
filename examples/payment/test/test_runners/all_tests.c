//This code is based on the example "foo".
//Authors:
//  Bernardo Koefender            - @BernardoKoefender
//  Frederico Arnaldo Ballve Neto - @fredballve
//  Willian Analdo Nunes          - @Willian-Nunes

#include "unity_fixture.h"

static void RunAllTests(void)
{
  RUN_TEST_GROUP(Payment);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
