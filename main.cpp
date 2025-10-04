#include <iostream>
#include "src/where.hpp"

int main() {
  const std::string text = "The quick brown fox";

  std::cout << "Find 'e' -> " << where(text, 'e') << std::endl;
  std::cout << "Find ' ' -> " << where(text, ' ') << std::endl;
  std::cout << "Find 'z' -> " << where(text, 'z') << std::endl;

  std::cout << "Find \"e\" -> " << where(text, "e") << std::endl;
  std::cout << "Find \"quick\" -> " << where(text, "quick") << std::endl;
  std::cout << "Find \"quiet\" -> " << where(text, "quiet") << std::endl;

  return 0;
}
