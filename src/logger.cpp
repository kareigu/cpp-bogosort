#include <iostream>
#include <string>

namespace log {
  void print(std::string in) {
    std::cout << in << std::endl;
  }

  template <typename T>
  void debug(std::string field, T in) {
    std::cout << field << ": " << in << std::endl;
  }
}
