#include "rule.h"
#include <string>

Rule::Rule(std::string syllable) : syllable(syllable) {}

Rule::~Rule() {}

std::string Rule::get_syllable() const {
  return syllable;
}

Fizz::Fizz() : Rule("Fizz") {}

bool Fizz::is_valid(unsigned int number) const {
  return number % 3 == 0;
}

Buzz::Buzz() : Rule("Buzz") {}

bool Buzz::is_valid(unsigned int number) const {
  return number % 5 == 0;
}

Woof::Woof() : Rule("Woof") {}

bool Woof::is_valid(unsigned int number) const {
  return number % 7 == 0;
}
