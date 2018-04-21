#include <iostream>
#include "sales_data.h"

int main() {
  Sales_data book;
  std::cin >> book.bookNo >> book.units_sold >> book.price;
  book.CalcRevenue();
  book.Print();
  return 0;
}