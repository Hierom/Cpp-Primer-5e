#include <iostream>
#include <string>

using namespace std;

int main() {
  string str("change all characters in this string.");
  for (auto &c : str) c = 'X';
  cout << str << endl;

  return 0;
}
