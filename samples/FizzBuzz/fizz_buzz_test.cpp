#include <iostream>

#include "fizz_buzz_modular.h"

void CheckFizzBuzz(int number, const ::std::string &expected) {
    ::std::string actual = FizzBuzz(number);
    if (actual != expected) {
        ::std::cerr << "Expected '" << expected << "', but got '" << actual
                    << "' instead." << ::std::endl;
    }
}

int main() {
    CheckFizzBuzz(1, "1");
    CheckFizzBuzz(2, "2");
    CheckFizzBuzz(3, "Fizz");
    CheckFizzBuzz(10, "Buzz");
    CheckFizzBuzz(3000, "Fizz Buzz");
    CheckFizzBuzz(18518505, "Fizz Buzz");
    return 0;
}
