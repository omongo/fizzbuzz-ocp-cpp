#include "CppUTest/CommandLineTestRunner.h"
#include "fizzbuzz.h"

TEST_GROUP(FizzBuzz)
{
  FizzBuzz f;
};

TEST(FizzBuzz, 1ShouldReturn1)
{
  CHECK_EQUAL("1", f.say(1));
}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);
}
