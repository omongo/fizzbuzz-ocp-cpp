#include <list>
#include <string>
#include "fizzbuzz.h"

FizzBuzz::FizzBuzz(std::list<Rule *> rules) : rules(rules) {}

FizzBuzz::FizzBuzz::~FizzBuzz() {
  for (auto rule : rules)
    delete rule;
}

std::string FizzBuzz::say(unsigned int number) const {
  for (auto rule : rules)
    if (rule->is_valid(number))
      return rule->get_syllable();
  return std::to_string(number);
}
