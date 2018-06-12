#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vecint;
  for (int i; cin >> i; vecint.push_back(i))
    ;

  return 0;
}
