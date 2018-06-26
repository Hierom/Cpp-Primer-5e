#include <iostream>
using namespace std;

int main() {
  constexpr size_t row = 3, col = 4;
  int ia[row][col]{{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

  for (const int(&i)[4] : ia)
    for (int j : i) std::cout << j << " ";
  std::cout << std::endl;

  for (size_t i = 0; i != row; ++i)
    for (size_t j = 0; j != col; ++j) cout << ia[i][j] << " ";
  cout << endl;

  for (int(*i)[col] = ia; i != ia + row; ++i)
    for (int *j = *i; j != *i + col; ++j) cout << *j << " ";
  cout << endl;

  return 0;
}