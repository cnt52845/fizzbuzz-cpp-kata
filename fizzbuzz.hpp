#ifndef FIZZBUZZ_HPP_
#define FIZZBUZZ_HPP_

class FizzBuzz {
 public:
  std::string operator()(int number) {
    init(number);
    calculate();
    return result;
  }

 private:
  void init(int number) {
    FizzBuzz::number = number;
    result.clear();
  }

  void calculate() {
    checkFizz();
    checkBuzz();
    checkFuzz();
    checkResult();
  }

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
