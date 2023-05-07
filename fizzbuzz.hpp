#ifndef FIZZBUZZ_HPP_
#define FIZZBUZZ_HPP_

std::string fizzbuzz(int number) {
  std::string result;
  if (0 == number % 3) {
    result += "Fizz";
  }
  if (0 == number % 5) {
    result += "Buzz";
  }
  if (result.empty()) {
    return std::to_string(number);  
  }
  return result;
}

#endif
