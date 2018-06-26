#include <iostream>
#include <vector>
using namespace std;

int main() {
  int arr[]{0, 1, 2, 3, 4, 5};
  vector<int> ivec(begin(arr), end(arr));
  for (auto const &i : ivec) std::cout << i << " " << std::endl;
  return 0;
}