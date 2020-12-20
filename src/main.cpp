#include <iostream>
#include "../include/logger.hpp"
#include "../include/rng.hpp"
#include "../include/arr.hpp"

int main() {
    logger::debug(rng::initRng(), "Seed", true);
    
    int ARR_LEN = 10;
    std::cin >> ARR_LEN;
    int* origArr = arr::fillArr(ARR_LEN);

    logger::printArr(origArr, ARR_LEN);

    int* cpyArr = arr::copyArr(origArr, ARR_LEN);

    logger::printArr(cpyArr, ARR_LEN);

    return 0;
}
