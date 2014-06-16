#ifndef FIZZBUZZ_H_
#define FIZZBUZZ_H_

#include <list>
#include <string>
#include "rule.h"

class FizzBuzz {
  std::list<Rule *> rules;
public:
  FizzBuzz(std::list<Rule *>);
  ~FizzBuzz();
  std::string say(unsigned int) const;
};

#endif
