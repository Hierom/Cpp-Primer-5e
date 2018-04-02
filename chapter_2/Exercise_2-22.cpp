#include <iostream>

int main() {
  int i = 666;
  int *p = &i;
  std::cout << p << " " << *p << std::endl;
  if (p) std::cout << "First" << std::endl;
  if (*p) std::cout << "Second" << std::endl;
}