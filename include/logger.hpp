#pragma once

namespace log {
  void print(std::string in);

  template <typename T>
  void debug(std::string field, T in);
}
