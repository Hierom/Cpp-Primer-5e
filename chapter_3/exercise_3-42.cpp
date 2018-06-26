#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> ivec{0, 1, 2, 3, 4, 5};
  int arr[ivec.size()];
  for (int pos = 0; pos != ivec.size(); ++pos) arr[pos] = ivec[pos];
  for (auto const i : arr) std::cout << i << " " << std::endl;
  return 0;
}