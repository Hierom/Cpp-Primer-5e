#include <iostream>

std::string global_str;
int global_int;
int main() {
  int local_int;
  std::string local_str;
  std::cout << local_str << std::endl;

  return 0;
}
