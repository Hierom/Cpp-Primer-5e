#include <iostream>
#include "sales_data.h"

int main() {
  Sales_data total;
  double totalPrice = 0.0;
  if (std::cin >> total.bookNo >> total.units_sold >> total.price) {
    total.revenue = total.units_sold * total.price;
    Sales_data trans;
    while (std::cin >> trans.bookNo >> trans.units_sold >> trans.price) {
      trans.revenue = trans.units_sold * trans.price;
      if (total.bookNo == trans.bookNo) {
        total.units_sold += trans.units_sold;
        total.revenue += trans.revenue;
      } else {
        std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
        if (total.units_sold != 0)
          std::cout << total.revenue / total.units_sold << std::endl;
        else
          std::cout << "(No sales)" << std::endl;
        total.bookNo = trans.bookNo;
        total.units_sold = trans.units_sold;
        total.revenue = trans.revenue;
      }
    }
    std::cout << total.revenue / total.units_sold << std::endl;
    if (total.units_sold != 0)
      std::cout << total.revenue / total.units_sold << std::endl;
    else
      std::cout << "(No sales)" << std::endl;
    return 0;
  } else {
    std::cerr << "No input data?" << std::endl;
    return -1;
  }
}