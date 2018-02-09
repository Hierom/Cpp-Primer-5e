#include <iostream>

int main() {
  int sum = 0, num = 0;
  while (std::cin >> num) sum += num;
  std::cout << sum << std::endl;

  return 0;
}