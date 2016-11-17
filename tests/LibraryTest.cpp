extern "C" {
#include "FizzBuzz.h"
}

#include <stdlib.h>

#include "CppUTest/TestHarness.h"

TEST_GROUP(LibraryTestGroup)
{
};

TEST(LibraryTestGroup, FirstTest)
{
   FAIL("Fail me!");
}

TEST(LibraryTestGroup, FizzBuzzRunWith1Test)
{
   char *answer = fizz_buzz(1);
   STRCMP_EQUAL("1",answer);
   free(answer);
}

TEST(LibraryTestGroup, FizzBuzzRunWith15Test)
{
   char *answer = fizz_buzz(15);
   STRCMP_EQUAL("FizzBuzz",answer);
   free(answer);
}
