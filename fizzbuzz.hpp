#ifndef FIZZBUZZ_HPP_
#define FIZZBUZZ_HPP_

class FizzBuzz {
 public:
  std::string operator()(int number) {
    std::string result;
    result += checkFizz(number);
    result += checkBuzz(number);
    result += checkFuzz(number);
    return checkResult(number, result);
  }

 private:
  std::string checkFizz(int number) {
    return (0 == number % 3) ? "Fizz" : "";
  }

  std::string checkBuzz(int number) {
    return (0 == number % 5) ? "Buzz" : "";
  }

  std::string checkFuzz(int number) {
    return (0 == number % 7) ? "Fuzz" : "";
  }

  std::string checkResult(int number, const std::string& result) {
    return (result.empty()) ? std::to_string(number) : result;
  }
};

#endif
