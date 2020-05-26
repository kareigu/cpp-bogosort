#include <iostream>

#include "print.h"
#include "fillArr.h"
#include "randArr.h"

int main() {
    int arrLen;
    std::cin >> arrLen;
    const int *sortedArr = fillArr(&arrLen);
    //fillArr(sortedArr, arrLen);
    int *arrToSort = fillArr(&arrLen);
    //fillArr(arrToSort, arrLen);

    randArr(arrToSort, arrLen);
    for (int i = 0; i < arrLen; i++) {
        printArr(arrToSort[i]);
    }
    return 0;
}
