#include <cstring>
#include <iostream>
using namespace std;

int main() {
  constexpr char cStr1[]{"Jerome"};
  constexpr char cStr2[]{"Chloe"};
  constexpr size_t new_size =
      __builtin_strlen(cStr1) + __builtin_strlen(" ") + __builtin_strlen(cStr2) + 1;

  char cStr3[new_size];

  strcpy(cStr3, cStr1);
  strcat(cStr3, " ");
  strcat(cStr3, cStr2);

  cout << cStr3 << endl;
  return 0;
}