#include <iostream>

int main() {
  constexpr size_t sz = 10;
  int array[sz];
  for (auto ptr = array; ptr != array + sz; ++ptr) *ptr = 0;
  for (const auto i : array) std::cout << i << " ";
  std::cout << std::endl;

  return 0;
}