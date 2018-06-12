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

  auto size = ivec.size();
  if (size % 2 != 0)
    size = size / 2 + 1;
  else
    size /= 2;

  cout << "vector"
       << ":\tsize: " << ivec.size() << ",\t value: [";
  for (auto i : ivec) cout << i << ",";
  if (!ivec.empty()) cout << "\b";
  cout << "]" << endl;

  for (int i = 0; i != size; ++i) cout << ivec[i] + ivec[ivec.size() - i - 1] << " ";
  cout << endl;

  return 0;
}