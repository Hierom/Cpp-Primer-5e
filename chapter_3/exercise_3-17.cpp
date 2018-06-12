#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> vecstring;
  for (string word; cin >> word; vecstring.push_back(word))
    ;
  for (auto &str : vecstring)
    for (auto &c : str) c = toupper(c);
  for (decltype(vecstring.size()) i = 0; i != vecstring.size(); ++i) {
    if (i != 0 && i % 8 == 0) cout << endl;
    cout << vecstring[i] << " ";
  }
  cout << endl;
  return 0;
}