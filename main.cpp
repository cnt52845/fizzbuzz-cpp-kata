#include <iostream>
#include "fizzbuzz.hpp"

int main()
{
    FizzBuzz fizzbuzz;
    for (int i = 1; i <= 100; i++) {
        std::cout << fizzbuzz(i) << std::endl;
    }
    return 0;
}
