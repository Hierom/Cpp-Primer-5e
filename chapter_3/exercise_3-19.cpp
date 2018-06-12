#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v1(10, 42);
  cout << "v1"
       << ":\tsize: " << v1.size() << ",\t value: [";
  for (auto i : v1) cout << i << ",";
  if (!v1.empty()) cout << "\b";
  cout << "]" << endl;

  vector<int> v2(10);
  for (auto &i : v2) i = 42;
  cout << "v2"
       << ":\tsize: " << v2.size() << ",\t value: [";
  for (auto i : v2) cout << i << ",";
  if (!v2.empty()) cout << "\b";
  cout << "]" << endl;

  vector<int> v3;
  for (int i = 0; i != 10; ++i) v3.push_back(42);
  cout << "v3"
       << ":\tsize: " << v3.size() << ",\t value: [";
  for (auto i : v3) cout << i << ",";
  if (!v3.empty()) cout << "\b";
  cout << "]" << endl;

  return 0;
}