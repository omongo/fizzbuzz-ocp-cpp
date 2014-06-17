#include <list>
#include <string>
#include "fizzbuzz.h"

FizzBuzz::FizzBuzz() : rules(std::list<Rule *>{new Fizz, new Buzz, new Woof}) {}

FizzBuzz::~FizzBuzz() {
  for (auto rule : rules)
    delete rule;
}

std::string FizzBuzz::say(unsigned int number) const {
  std::string word = "";
  for (auto rule : rules)
    if (rule->is_valid(number))
      word += rule->get_syllable();
  return word == "" ? std::to_string(number) : word;
}
