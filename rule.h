#ifndef RULE_H_
#define RULE_H_

#include <string>

class Rule {
  std::string syllable;
public:
  Rule(std::string);
  virtual ~Rule();
  virtual bool is_valid(unsigned int) const = 0;
  std::string get_syllable() const;
};

class Fizz : public Rule {
public:
  Fizz();
  bool is_valid(unsigned int) const;
};

class Buzz : public Rule {
public:
  Buzz();
  bool is_valid(unsigned int) const;
};

class Woof : public Rule {
public:
  Woof();
  bool is_valid(unsigned int) const;
};

#endif
