#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item item1, item2;
  int cnt = 0;
  std::cin >> item1;
  while (std::cin >> item2) {
    if (item1.isbn() == item2.isbn()) {
      ++cnt;
    } else {
      std::cerr << "Data must refer to same ISBN" << std::endl;
      return -1;
    }
  }
  std::cout << "There are " << cnt << " times of transcations above."
            << std::endl;
  return 0;
}
