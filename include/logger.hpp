#pragma once

namespace logger {
  void print(std::string in);

  template<typename T>
  void debug(std::string field, T in) {
    std::cout << field << ": " << in << std::endl;
  }

  void printArr(int *in, int len);
}
