#include <iostream>

int main() {
  int x{0}, y{0};
  std::cin >> x >> y;
  std::cout << "The sum of " << x
			<< " and " << y
			<< " is " << x + y << std::endl;
/* std::cout << "The sum of " << x;
 * std::cout << " and " << y;
 * std::cout << " is " << x + y << std::endl;
 */
  return 0;
}