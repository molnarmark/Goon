#include "Goon.h"

Goon::Goon() {}

int Goon::loadRawCode(std::string* rawCode) {
  this->rawCode = rawCode;
  return 0;
}