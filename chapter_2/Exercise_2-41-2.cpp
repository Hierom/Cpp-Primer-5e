#include <iostream>
#include "sales_data.h"

int main() {
  Sales_data book1, book2;
  std::cin >> book1.bookNo >> book1.units_sold >> book1.price;
  std::cin >> book2.bookNo >> book2.units_sold >> book2.price;
  book1.revenue = book1.units_sold * book1.price;
  book2.revenue = book2.units_sold * book2.price;
  if (book1.bookNo == book2.bookNo) {
    unsigned totalUnits = book1.units_sold + book2.units_sold;
    double totalRevenue = book1.revenue + book2.revenue;
    std::cout << book1.bookNo << " " << totalUnits << " " << totalRevenue << " ";
    if (totalUnits != 0)
      std::cout << totalRevenue / totalUnits << std::endl;
    else
      std::cout << "(No sales)" << std::endl;
    return 0;
  } else {
    std::cerr << "Data must refer to same ISBN No." << std::endl;
    return -1;
  }
}