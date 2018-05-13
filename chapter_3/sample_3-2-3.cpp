#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main() {
  string str("some string");
  for (decltype(str.size()) index = 0; index != str.size() && !isspace(str[index]);
       str[index] = toupper(str[index++]))
    ;
  cout << str << endl;
  return 0;
}
