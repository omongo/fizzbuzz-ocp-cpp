#ifndef FIZZBUZZ_H_
#define FIZZBUZZ_H_

#include "rule.h"
#include <list>
#include <string>

class FizzBuzz {
  std::list<Rule *> rules;
public:
  FizzBuzz();
  ~FizzBuzz();
  std::string say(unsigned int) const;
};

#endif
