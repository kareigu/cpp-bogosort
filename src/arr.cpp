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

  void shuffleArr(int* arr, int length) {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < length; j++) {
        int tempIndex = j + i;
        if(tempIndex >= length)
          tempIndex = 9;

        int temp = arr[tempIndex];

        arr[tempIndex] = arr[i];
        arr[i] = temp;
      }
    }
  }
} 