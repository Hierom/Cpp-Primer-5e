#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> ivec;
  for (int i; cin >> i; ivec.push_back(i))
    ;

  if (ivec.empty()) {
    cout << "input at least one integer." << endl;
    return -1;
  }

  // If the vector has odd size, element in the middle will add to itself.
  auto size = (ivec.size() + 1) / 2;

  cout << "vector"
       << ":\tsize: " << ivec.size() << ",\t value: [";
  for (auto i : ivec) cout << i << ",";
  if (!ivec.empty()) cout << "\b";
  cout << "]" << endl;

  for (int i = 0; i != size; ++i) cout << ivec[i] + ivec[ivec.size() - i - 1] << " ";
  cout << endl;

  return 0;
}