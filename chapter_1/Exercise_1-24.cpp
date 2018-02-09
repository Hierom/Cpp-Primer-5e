#include <iostream>
#include "Sales_item.h"

int main() {
  Sales_item item1, item2;
  if (std::cin >> item1) {
    int cnt = 1;

    while (std::cin >> item2) {
      if (item1.isbn() == item2.isbn()) {
        ++cnt;
      } else {
        std::cout << "There are " << cnt
                  << " times of transcations in ISBN: " << item1.isbn()
                  << " above." << std::endl;
        item1 = item2;
        cnt = 1;
      }
    }
    std::cout << "There are " << cnt
              << " times of transcations in ISBN: " << item1.isbn() << " above."
              << std::endl;
  }
  return 0;
}
