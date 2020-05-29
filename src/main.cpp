#include <iostream>

#include "headers/printArr.h"
#include "headers/fillArr.h"
#include "headers/randArr.h"
#include "headers/checkArr.h"

int main() {
    int arrLen;
    std::cin >> arrLen;

    int *sortedArr = new int[arrLen];
    //std::cout << "sortedArr" << std::endl;
    fillArr(sortedArr, arrLen);
    //std::cout << sortedArr << std::endl;

    int *arrToSort = new int[arrLen];
    //std::cout << "arrToSort" << std::endl;
    fillArr(arrToSort, arrLen);
    //std::cout << arrToSort << std::endl;

    randArr(arrToSort, arrLen);

    bool isSorted = false;

    while(!isSorted) {
        if(checkArr(sortedArr, arrToSort, arrLen)){
            isSorted = true;
        }
        else {
            randArr(arrToSort, arrLen);
        }
        for (int i = 0; i < arrLen; i++) {
            std::cout << arrToSort[i];
        }
        std::cout << std::endl;
        delete[] sortedArr;
        delete[] arrToSort;
    }

    return 0;
}
