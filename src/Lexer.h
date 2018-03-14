#ifndef GOON_LEXER_H
#define GOON_LEXER_H

#include <iostream>
#include <vector>
#include "Token.h"

class Lexer {
public:
  Lexer();
  char next();
  char peek();
  void eat();
  std::string isKeyword(std::string text);

  std::vector<Token*> lex(std::string code);

private:
  std::string code;
  int currentIndex = -1;
  std::vector<Token*> tokenStream;
};

#endif