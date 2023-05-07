#ifndef FIZZBUZZ_HPP_
#define FIZZBUZZ_HPP_

std::string fizzbuzz(int number) {
  if (0 == number % 3) {
    return "Fizz";
  }
  return std::to_string(number);  
}

#endif
