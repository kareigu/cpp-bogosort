#include <iostream>
#include "../include/logger.hpp"

int main() {
    log::print("yes");
    int arr[10] = {0, 2, 5, 1, 2, 3, 4, 5, 6, 7};
    int arr2[5] = {0, 2, 5, 1, 2};
    log::printArr(arr, 10);
    log::printArr(arr2, 5);
    log::debug("val", 5);


    return 0;
}
