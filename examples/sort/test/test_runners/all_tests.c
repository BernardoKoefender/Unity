//This code is based on the example "foo".
//Authors:
//  Bernardo Koefender            - @BernardoKoefender
//  Frederico Arnaldo Ballve Neto - @fredballve
//  Willian Analdo nunes          - @Willian-Nunes

#include "unity_fixture.h"

static void RunAllTests(void)
{
  //RUN_TEST_GROUP(Foo);
  RUN_TEST_GROUP(Sort);
}

int main(int argc, const char * argv[])
{
  return UnityMain(argc, argv, RunAllTests);
}
