#include <iostream>

int main() {
  int sum = 0;
  for (int num = 50; num <= 100; ++num) {
    sum += num;
  }
  std::cout << sum << std::endl;
  return 0;
}