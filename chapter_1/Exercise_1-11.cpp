#include <iostream>

int main() {
  int x = 0, y = 0;
  std::cin >> x >> y;
  if (x > y) {
    while (x > y + 1) {
      std::cout << --x << std::endl;
    }
  } else {
    while (y > x + 1) {
      std::cout << --y << std::endl;
    }
  }
  return 0;
}