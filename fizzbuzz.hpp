#ifndef FIZZBUZZ_HPP_
#define FIZZBUZZ_HPP_

class FizzBuzz {
 public:
  std::string operator()(int number) {
    checkFizz(number);
    checkBuzz(number);
    checkFuzz(number);
    checkResult(number);
    return result;
  }

 private:
  void checkFizz(int number) {
    if (0 == number % 3) {
      result += "Fizz";
    }
  }

  void checkBuzz(int number) {
    if (0 == number % 5) {
      result += "Buzz";
    }
  }

  void checkFuzz(int number) {
    if (0 == number % 7) {
      result += "Fuzz";
    }
  }

  void checkResult(int number) {
    if (result.empty()) {
      result = std::to_string(number);
    }
  }

  std::string result;
};

#endif
