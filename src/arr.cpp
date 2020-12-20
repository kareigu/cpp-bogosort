#include "../include/rng.hpp"

namespace arr {

  int* fillArr(int length) {
    int* temp = new int[length];

    for (int i = 0; i < length; i++) {
        temp[i] = rng::genInt();
    }

    return temp;
  }

  int* copyArr(int* original, int length) {
    int* temp = new int[length];

    for (int i = 0; i < length; i++) {
        temp[i] = original[i];
    }

    return temp;
  }
} 