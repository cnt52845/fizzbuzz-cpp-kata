#ifndef FIZZBUZZ_HPP_
#define FIZZBUZZ_HPP_

class FizzBuzz {
 public:
  std::string operator()(int number) {
    FizzBuzz::number = number;
    result.clear();
    checkFizz();
    checkBuzz();
    checkFuzz();
    checkResult();
    return result;
  }

 private:
  void checkFizz() {
    if (0 == number % 3) {
      result += "Fizz";
    }
  }

  void checkBuzz() {
    if (0 == number % 5) {
      result += "Buzz";
    }
  }

  void checkFuzz() {
    if (0 == number % 7) {
      result += "Fuzz";
    }
  }

  void checkResult() {
    if (result.empty()) {
      result = std::to_string(number);
    }
  }

  int number;
  std::string result;
};

#endif
