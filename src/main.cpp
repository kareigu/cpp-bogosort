#include <iostream>

#include "headers/printArr.h"
#include "headers/fillArr.h"
#include "headers/randArr.h"
#include "headers/checkArr.h"

int main() {
    int arrLen;
    std::cin >> arrLen;

    int *sortedArr = new int[arrLen];
    fillArr(&sortedArr, arrLen);

    int *arrToSort = new int[arrLen];
    fillArr(&arrToSort, arrLen);

    randArr(arrToSort, arrLen);

    bool isSorted = false;

    while(!isSorted) {
        if(checkArr(sortedArr, arrToSort, arrLen)){
            isSorted = true;
            delete[] sortedArr;
            delete[] arrToSort;
        }
        else {
            randArr(arrToSort, arrLen);
        }
        for (int i = 0; i < arrLen; i++) {
            std::cout << arrToSort[i];
        }
        std::cout << std::endl;
    }

    return 0;
}
