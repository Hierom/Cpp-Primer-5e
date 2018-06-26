#include <iostream>
using namespace std;

int main() {
  constexpr size_t row = 3, col = 4;
  int ia[row][col]{{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};

  for (const auto &i : ia)
    for (auto j : i) std::cout << j << " ";
  cout << endl;

  for (auto i = 0; i != row; ++i)
    for (auto j = 0; j != col; ++j) cout << ia[i][j] << " ";
  cout << endl;

  for (auto i = ia; i != ia + row; ++i)
    for (auto j = *i; j != *i + col; ++j) cout << *j << " ";
  cout << endl;

  return 0;
}