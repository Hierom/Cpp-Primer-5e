#include <iostream>
#include "sales_data.h"

int main() {
  Sales_data total;
  if (std::cin >> total.bookNo >> total.units_sold >> total.price) {
    total.CalcRevenue();
    Sales_data trans;
    while (std::cin >> trans.bookNo >> trans.units_sold >> trans.price) {
      trans.CalcRevenue();
      if (total.bookNo == trans.bookNo) {
        total.AddData(trans);
      } else {
        total.Print();
        total.SetData(trans);
      }
    }
    total.Print();
    return 0;
  } else {
    std::cerr << "No input data?" << std::endl;
    return -1;
  }
}