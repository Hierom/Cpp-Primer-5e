#include <iostream>

int main() {
  int myInt = 123;

  int* pInt1;
  pInt1 = &myInt;

  int* pInt2 = &myInt;

  std::cout << pInt1 << " " << &myInt << " " << myInt << " " << *pInt1 << std::endl;
  std::cout << pInt2 << " " << *pInt2 << std::endl;
}