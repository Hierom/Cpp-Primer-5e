#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

bool compare(int* const pb1, int* const pe1, int* const pb2, int* const pe2) {
  if ((pe1 - pb1) != (pe2 - pb2))
    return false;
  else
    for (int *i = pb1, *j = pb2; (i != pe1) && (j != pe2); ++i, ++j)
      if (*i != *j) return false;
  return true;
}

int main() {
  int arr1[]{0, 1, 2};
  int arr2[]{0, 1, 4};
  if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
    cout << "The two arrays are equal." << endl;
  else
    cout << "The two arrays are different." << endl;
  cout << "=========Vector Ver.=========" << endl;
  vector<int> vec1{0, 1, 2};
  vector<int> vec2{0, 1, 2};
  if (vec1 == vec2)
    cout << "The two vectors are equal." << endl;
  else
    cout << "The two vectors are different." << endl;

  return 0;
}