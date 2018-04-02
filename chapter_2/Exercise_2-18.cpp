#include <iostream>

int main() {
  int i = 0, *ri = &i;
  std::cout << i << " " << ri << std::endl;
  int j = 1;
  ri = &j;
  std::cout << ri << " " << *ri << std::endl;
  *ri = 10;
  std::cout << ri << " " << *ri << std::endl;
  std::cout << j << " " << &j << std::endl;
  ri = &i;
  std::cout << ri << " " << *ri << std::endl;
}