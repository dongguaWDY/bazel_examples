#ifndef LIB_HELLO_GREET_H_
#define LIB_HELLO_GREET_H_

#include <iostream>
#include <string>

class Test
{
public:
template<typename T> static void test(const T &t);

// template<> static void test(const int &t);

};


template<typename T>
void Test::test(const T &t) {
  std::cout << __LINE__ << std::endl;
}


#endif
