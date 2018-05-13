#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main() {
  string str("change all characters in this string.");

  // while
  decltype(str.size()) i = 0;
  while (i < str.size()) str[i++] = 'X';
  cout << str << endl;

  // for
  for (i = 0; i < str.size(); str[i++] = 'Y')
    ;
  cout << str << endl;

  // I prefer RANGE FOR.
  return 0;
}
