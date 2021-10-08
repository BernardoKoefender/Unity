#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"


TEST_GROUP(Sort);

TEST_SETUP(Sort)
{

}

TEST_TEAR_DOWN(Sort)
{

}

TEST(Sort, TestSort1)
{
  // Ok
  int vec[]   = {3,1,2};
  int vec_o[] = {1,2,3};
  int size = 3;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size);
}

TEST(Sort, TestSort2)
{
  // Falha - solução desordenada
  int vec[]   = {3,1,2};
  int vec_o[] = {2,1,3};
  int size = 3;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size );
}

TEST(Sort, TestSort3)
{
  // Falha - tamanho do vetor errado
  int vec[]   = {3,1,2};
  int vec_o[] = {1,2,3};
  int size = 4;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size);
}


TEST(Sort, TestSort4)
{
  // Ok
  int vec[]   = {3,0,-40};
  int vec_o[] = {-40,0,3};
  int size = 3;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size);
}

TEST(Sort, TestSort5)
{
  // Assert that the resulting is not a NULLPTR
  int vec[]   = {3,0,-40};
  int size = 3;
  sort(vec, size);
  TEST_ASSERT_NOT_NULL(vec);
}