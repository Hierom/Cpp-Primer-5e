#include <iostream>
#include <vector>

template <std::size_t array_size>  // generic version
void print_array(int (&input)[array_size]) {
  for (const auto elem : input) {
    std::cout << elem << ' ';
  }
  std::cout << "\b." << std::endl;
}

void print_vector(const std::vector<int> &v) {
  for (auto it = v.cbegin(); it != v.cend(); ++it) std::cout << *it << " ";
  std::cout << "\b." << std::endl;
}

int main() {
  constexpr size_t array_size = 10;
  // array ver.
  int aten1[array_size];
  for (size_t pos = 0; pos != 10; ++pos) aten1[pos] = pos;
  int aten2[array_size];
  for (size_t pos = 0; pos != 10; ++pos) aten2[pos] = aten1[pos];

  print_array(aten1);
  print_array(aten2);

  // vector ver.
  std::vector<int> vten1;
  for (size_t pos = 0; pos != 10; ++pos) vten1.push_back(pos);
  std::vector<int> vten2(vten1);

  print_vector(vten1);
  print_vector(vten2);

  return 0;
}