#ifndef GOON_TOKEN_H
#define GOON_TOKEN_H

#include <iostream>

class Token {
public:
  Token(std::string tokenType);
private:
  std::string type;
};

#endif