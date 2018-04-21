#include <iostream>
#include "sales_data.h"

int main() {
  Sales_data book1, book2;
  std::cin >> book1.bookNo >> book1.units_sold >> book1.price;
  std::cin >> book2.bookNo >> book2.units_sold >> book2.price;
  book1.CalcRevenue();
  book2.CalcRevenue();
  if (book1.bookNo == book2.bookNo) {
    book1.AddData(book2);
    book1.Print();
    return 0;
  } else {
    std::cerr << "Data must refer to same ISBN No." << std::endl;
    return -1;
  }
}