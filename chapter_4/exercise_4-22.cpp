#include <iostream>

using namespace std;

int main() {
  for (unsigned g; cin >> g;) {
    // conditional operators
    auto result = g > 90 ? "High pass" : g < 60 ? "Fail" : g < 75 ? "Low pass" : "Pass";
    cout << result << endl;

    // if statements
    if (g > 90)
      cout << "High pass";
    else if (g < 60)
      cout << "Fail";
    else if (g < 75)
      cout << "Low pass";
    else
      cout << "Pass";
    cout << endl;
  }
  return 0;
}