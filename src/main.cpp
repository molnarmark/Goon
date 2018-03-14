#include <iostream>

#include "Goon.h"

std::string testCode = "lorem"
"ipsum";

int main() {
  std::cout << "Goon Compiler v" << GOON_VERSION << "." << std::endl;
  Goon* goon = new Goon();
  goon->loadRawCode(testCode);
  delete goon;

  return 0;
}