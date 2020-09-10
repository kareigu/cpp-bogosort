#include <iostream>
#include "../include/logger.hpp"
#include "../include/rng.hpp"

int main() {
    logger::debug(rng::initRng(), "Seed", true);
    logger::print("yes");
    int arr[10] = {0, 2, 5, 1, 2, 3, 4, 5, 6, 7};
    int arr2[5] = {0, 2, 5, 1, 2};
    logger::printArr(arr, 10);
    logger::printArr(arr2, 5);
    logger::debug(5);

    for (int i = 0; i < 10; i++) {
        logger::debug(rng::genDouble(), "Double");
        logger::debug(rng::genInt(), "Int", true);
    }
    

    return 0;
}
