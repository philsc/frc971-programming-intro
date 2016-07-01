#include <iostream>
#include <random>

int main(void) {
  // Generate a random number between 1 and 100.
  ::std::random_device rd;
  ::std::default_random_engine generator(rd());
  ::std::uniform_int_distribution<int> distribution(1,100);

  int random_number = distribution(generator);

  ::std::cout << "The number I am thinking of is " << random_number
              << ::std::endl;

  return 0;
}
