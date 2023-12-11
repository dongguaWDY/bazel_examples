#include "hello-greet.h"
#include "hello-greet2.h"
#include <ctime>
#include <iostream>
#include <string>

void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}

int main(int argc, char** argv) {
    hhhh();
    Test::test(3);
    Test::test(true);
  return 0;
}
