#include "CppUTest/CommandLineTestRunner.h"
#include "fizzbuzz.h"
#include "rule.h"
#include <list>
#include <exception>

TEST_GROUP(FizzBuzz) {
  FizzBuzz f;
};

TEST(FizzBuzz, 1ShouldReturn1) {
  CHECK_EQUAL("1", f.say(1));
}

TEST(FizzBuzz, 3ShouldReturnFizz) {
  CHECK_EQUAL("Fizz", f.say(3));
}

TEST(FizzBuzz, 5ShouldReturnBuzz) {
  CHECK_EQUAL("Buzz", f.say(5));
}

TEST(FizzBuzz, 7ShouldReturnWoof) {
  CHECK_EQUAL("Woof", f.say(7));
}

TEST(FizzBuzz, 15ShouldReturnFizzBuzz) {
  CHECK_EQUAL("FizzBuzz", f.say(15));
}

TEST(FizzBuzz, 21ShouldReturnFizzWoof) {
  CHECK_EQUAL("FizzWoof", f.say(21));
}

TEST(FizzBuzz, 35ShouldReturnBuzzWoof) {
  CHECK_EQUAL("BuzzWoof", f.say(35));
}

TEST(FizzBuzz, 105ShouldReturnFizzBuzzWoof) {
  CHECK_EQUAL("FizzBuzzWoof", f.say(105));
}

int main(int argc, char *argv[]) {
  return RUN_ALL_TESTS(argc, argv);
}
