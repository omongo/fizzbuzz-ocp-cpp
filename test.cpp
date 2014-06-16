#include "CppUTest/CommandLineTestRunner.h"
#include "fizzbuzz.h"
#include "rule.h"
#include <list>

TEST_GROUP(FizzBuzz)
{
  FizzBuzz f{std::list<Rule *>{new Fizz, new Buzz}};
};

TEST(FizzBuzz, 1ShouldReturn1)
{
  CHECK_EQUAL("1", f.say(1));
}

TEST(FizzBuzz, 3ShouldReturnFizz)
{
  CHECK_EQUAL("Fizz", f.say(3));
}

TEST(FizzBuzz, 5ShouldReturnBuzz)
{
  CHECK_EQUAL("Buzz", f.say(5));
}

int main(int argc, char *argv[])
{
  return RUN_ALL_TESTS(argc, argv);
}
