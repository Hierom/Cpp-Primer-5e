#include <iostream>
#include <vector>

int main() {
  std::vector<int> tenint{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto it = tenint.begin(); it != tenint.end(); ++it) *it *= 2;
  for (const auto i : tenint) std::cout << i << " ";
  std::cout << "\b." << std::endl;

  return 0;
}