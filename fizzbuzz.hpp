#ifndef FIZZBUZZ_HPP_
#define FIZZBUZZ_HPP_

std::string checkFizz(int number) {
  return (0 == number % 3) ? "Fizz" : "";
}

std::string checkBuzz(int number) {
  return (0 == number % 5) ? "Buzz" : "";
}

std::string checkResult(int number, const std::string& result) {
  return (result.empty()) ? std::to_string(number) : result;
}

std::string fizzbuzz(int number) {
  std::string result;
  result += checkFizz(number);
  result += checkBuzz(number);
  if (0 == number % 7) {
    result += "Fuzz";
  }
  return checkResult(number, result);
}

#endif
