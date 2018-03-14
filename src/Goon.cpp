#include "Goon.h"

Goon::Goon() {
  this->lexer = new Lexer();
}

Goon::~Goon() {
  delete this->lexer;
}

int Goon::loadRawCode(std::string rawCode) {
  this->lexer->lex(rawCode);
  return 0;
}