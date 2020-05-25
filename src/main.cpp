#include <iostream>

void printArr(int arrIndx) {
    std::cout << arrIndx << std::endl;
}

void fillArr(int arr [], int arrLen) {
    for(int i = 0; i < arrLen; i++){
        arr[i] = i + 1;
    }
}

int main() {
    int arrLen;
    std::cin >> arrLen;
    int sortedArr [arrLen];
    fillArr(sortedArr, arrLen);
    int arrToSort [arrLen];
    fillArr(arrToSort, arrLen);

    for (int i = 0; i < arrLen; i++) {
        printArr(arrToSort[i]);
    }
    return 0;
}
