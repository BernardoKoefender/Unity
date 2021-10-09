#include "sort.h"
#include "unity.h"
#include "unity_fixture.h"

// Expected results:
// TestSort1: pass
// TestSort2: fail
// TestSort3: fail
// TestSort4: pass
// TestSort5: pass
// TestSort6: pass
// TestSort7: pass

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{

}

TEST_TEAR_DOWN(Sort)
{

}

TEST(Sort, TestSort1)
{
  // This must pass
  // Test ordered solution
  int vec[]   = {3,1,2};
  int vec_o[] = {1,2,3};
  int size = 3;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size);
}

TEST(Sort, TestSort2)
{
  // This must fail
  // Test unordered solution
  int vec[]   = {3,1,2};
  int vec_o[] = {2,1,3};
  int size = 3;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size );
}

TEST(Sort, TestSort3)
{
  // This must fail
  // Test wrong array size
  int vec[]   = {3,1,2};
  int vec_o[] = {1,2,3};
  int size = 4;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size);
}


TEST(Sort, TestSort4)
{
  // This must pass
  // Test ordered solution
  int vec[]   = {3,0,-40};
  int vec_o[] = {-40,0,3};
  int size = 3;

  sort(vec, size);
  TEST_ASSERT_EQUAL_INT_ARRAY(vec_o, vec, size);
}

TEST(Sort, TestSort5)
{
  // This must pass
  // Assert that the resulting vector is not NULLPTR
  int vec[]   = {3,0,-40};
  int size = 3;
  sort(vec, size);
  TEST_ASSERT_NOT_NULL(vec);
}

TEST(Sort, TestSort6)
{
  // This must pass
  // Assert that vector's size match
  int vec[] = {3,0,-40};
  int size = 3;
  sort(vec, size);
  TEST_ASSERT_TRUE( (sizeof(vec)/sizeof(vec[0])) == size);
}

TEST(Sort, TestSort7)
{
  // This must pass
  // Assert memory address hasn't changed. Pointless?
  int vec[] = {3,0,10};
  int size = 3;
  int *p = &vec;
  sort(vec, size);
  TEST_ASSERT_EQUAL_PTR( p, vec);
}