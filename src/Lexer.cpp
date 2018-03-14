#include "Lexer.h"

Lexer::Lexer() {}

char Lexer::next() {
  return this->code[++this->currentIndex];
}

char Lexer::peek() {
  return this->code[this->currentIndex + 1];
}

void Lexer::eat() {
  this->currentIndex += 1;
}

std::string Lexer::isKeyword(std::string text) {
  std::cout << "Trying to match keyword " << text << std::endl;
  // Check if a text if a keyword and if so, return it
  return "";
}

std::vector<Token*> Lexer::lex(std::string code) {
  this->code = code;
  char nextChar;
  std::string matched = "";
  bool matchingString = false;

  while ((nextChar = this->next()) != NULL) {
    // Its impossible to start out a Goon program with a number so we automatically start matching an identifier

    std::string keyword = this->isKeyword(matched);

    if (keyword != "") {
      // A keyword was found
    } else {
      matched += nextChar;
    }

  }



  return this->tokenStream;
}