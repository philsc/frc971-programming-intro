#include <iostream>

#include "fizz_buzz_modular.h"

int main(void) {
  // Print the numbers 1 through 100 on the screen.
  for (int i = 0; i < 100; ++i) {
    ::std::cout << FizzBuzz(i + 1) << ::std::endl;
  }
  return 0;
}
