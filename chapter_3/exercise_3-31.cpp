#include <iostream>

int main() {
  constexpr size_t array_size = 10;
  int tenints[array_size];
  for (size_t pos = 0; pos != 10; ++pos) tenints[pos] = pos;
  for (const auto elem : tenints) {
    std::cout << elem << ' ';
  }
  std::cout << "\b." << std::endl;
  return 0;
}