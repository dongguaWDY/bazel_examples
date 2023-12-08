#include "hello-greet.h"
#include <string>

template<>
void Test::test(const int &t) {
  std::cout << __LINE__ << std::endl;
}