#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1{"Jerome"}, s2{"Chloe"};
  if (s1 == s2)
    cout << "Same string." << endl;
  else if (s1 > s2)
    cout << "s1 > s2" << endl;
  else
    cout << "s1 < s2" << endl;
  cout << "====C-style Ver.====" << endl;
  const char* cs1 = "Apple";
  const char* cs2 = "Apple";
  auto result = strcmp(cs1, cs2);

  if (result == 0)
    cout << "Same string." << endl;
  else if (result > 0)
    cout << "cs1 > cs2" << endl;
  else
    cout << "cs1 < cs2" << endl;
  return 0;
}