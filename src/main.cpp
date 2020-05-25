#include <iostream>

void printArr(int arrIndx) {
    std::cout << arrIndx << std::endl;
}

int * fillArr(int arrLen) {
    static int arr[10];
    for(int i = 0; i < arrLen; i++){
        arr[i] = i + 1;
    }
    return arr;
}

int main() {
    int arrLen;
    std::cin >> arrLen;
    const int *sortedArr = fillArr(arrLen);
    //fillArr(sortedArr, arrLen);
    int *arrToSort = fillArr(arrLen);
    //fillArr(arrToSort, arrLen);

    for (int i = 0; i < arrLen; i++) {
        printArr(arrToSort[i]);
    }
    return 0;
}
