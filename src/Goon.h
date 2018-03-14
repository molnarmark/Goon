#ifndef GOON_GOON_H
#define GOON_GOON_H

#include <iostream>

#include "consts.h"
#include "Lexer.h"
#include "Parser.h"
#include "AST.h"

class Goon {
public:
  Goon();
  ~Goon();
  int loadRawCode(std::string code);

private:
  Lexer* lexer;
  std::string rawCode;
};

#endif