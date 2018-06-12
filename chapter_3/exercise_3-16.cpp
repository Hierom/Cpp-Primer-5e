#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<int> v1;
  cout << "v1"
       << ":\tsize: " << v1.size() << ",\t value: [";
  for (auto i : v1) cout << i << ",";
  cout << "]" << endl;

  vector<int> v2(10);
  cout << "v2"
       << ":\tsize: " << v2.size() << ",\t value: [";
  for (auto i : v2) cout << i << ",";
  if (!v2.empty()) cout << "\b";
  cout << "]" << endl;

  vector<int> v3(10, 42);
  cout << "v3"
       << ":\tsize: " << v3.size() << ",\t value: [";
  for (auto i : v3) cout << i << ",";
  if (!v3.empty()) cout << "\b";
  cout << "]" << endl;

  vector<int> v4{10};
  cout << "v4"
       << ":\tsize: " << v4.size() << ",\t value: [";
  for (auto i : v4) cout << i << ",";
  if (!v4.empty()) cout << "\b";
  cout << "]" << endl;

  vector<int> v5{10, 42};
  cout << "v5"
       << ":\tsize: " << v5.size() << ",\t value: [";
  for (auto i : v5) cout << i << ",";
  if (!v5.empty()) cout << "\b";
  cout << "]" << endl;

  vector<string> v6{10};
  cout << "v6"
       << ":\tsize: " << v6.size() << ",\t value: [";
  for (auto i : v6)
    if (i.empty())
      cout << "NULL,";
    else {
      cout << i << ",";
    }
  cout << "\b]" << endl;

  vector<string> v7{10, "hi"};
  cout << "v7"
       << ":\tsize: " << v7.size() << ",\t value: [";
  for (auto i : v7)
    if (i.empty())
      cout << "NULL,";
    else {
      cout << i << ",";
    }
  cout << "\b]" << endl;

  return 0;
}