#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> text;

  for (std::string word; getline(std::cin, word); text.push_back(word))
    ;

  for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
    for (auto &c : *it) c = toupper(c);
    std::cout << *it << " ";
  }
  std::cout << "\b." << std::endl;

  return 0;
}