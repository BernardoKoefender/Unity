//This code is based on the example "foo".
//Authors:
//  Bernardo Koefender            - @BernardoKoefender
//  Frederico Arnaldo Ballve Neto - @fredballve
//  Willian Analdo nunes          - @Willian-Nunes

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
  // Test ordered solution
  int vec[]   = {3,1,2};
  int vec_o[] = {1,2,3};
  int size = 3;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size);
}

TEST(Sort, TestSort2)
{
  // Test ordered solution
  int vec[]   = {3,0,-40};
  int vec_o[] = {-40,0,3};
  int size = 3;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size);
}

TEST(Sort, TestSort3)
{
  // Test if sort is not ordering in descending order
  int vec[]   = {3,1,2};
  int vec_o[] = {1,2,3};
  int size = 3;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size );
}


TEST(Sort, TestSort4)
{
  // Test what happens when the vector is already ordered
  int vec[]   = {1,2,3};
  int vec_o[] = {1,2,3};
  int size = 3;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size );
}

TEST(Sort, TestSort5)
{
  // Assert that the resulting vector is not NULLPTR
  int vec[]   = {3,0,-40};
  int size = 3;
  sort(vec, size);
  TEST_ASSERT_NOT_NULL(vec);
}

TEST(Sort, TestSort6)
{
  // Assert that vector's size match
  int vec[] = {3,0,-40};
  int size = 3;
  sort(vec, size);
  TEST_ASSERT_TRUE( (sizeof(vec)/sizeof(vec[0])) == size);
}

TEST(Sort, TestSort7)
{
  // Assert memory address hasn't changed. Pointless?
  int vec[] = {3,0,10};
  int size = 3;
  int *p = vec;
  sort(vec, size);
  TEST_ASSERT_EQUAL_PTR( p, &vec);
}

TEST(Sort, TestSort8)
{
  // Test different sizes (excluding last element)
  int vec[]   = {5,4,3,2,1};
  int vec_o[] = {2,3,4,5,1};
  int size = 4;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size+1);
}

TEST(Sort, TestSort9)
{
  // Test different sizes (excluding first element)
  int vec[]   = {5,4,3,2,1};
  int vec_o[] = {5,1,2,3,4};
  int size = 4;

  sort(&vec[1], size); // Confere a sintaxe do ponteiro do vec
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size+1);
}

TEST(Sort, TestSort10)
{
  // Test all negative elements 
  int vec[]   = {-3,-1,-5,-4,-2};
  int vec_o[] = {-5,-4,-3,-2,-1};
  int size = 5;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size);
}

TEST(Sort, TestSort11)
{
  // Test equal elements
  int vec[]   = {1,2,0,1};
  int vec_o[] = {0,1,1,2};
  int size = 4;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size);
}

TEST(Sort, TestSort12)
{
  // Test only one element array
  int vec[]   = {78};
  int vec_o[] = {78};
  int size = 1;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size);
}

TEST(Sort, TestSort13)
{
  // Test empty array
  int vec[]   = {};
  int *vec_o = vec;
  int size = 0;

  sort(vec, size);
  TEST_ASSERT_EQUAL(vec_o, vec);
}

//TEST(Sort, TestSort14)
//{
//  // THIS TEST FAILS, HOW TO DO ASSERT_NOT_EQUAL???
//  int vec[]   = {5,4,3,2,1};
//  int vec_o[] = {1,2,3,4,5};
//  int size = 10;
//
//  sort(vec, size);
//  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size-5);
//}