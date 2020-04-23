#include <iostream>
#include <array>
#include <algorithm>

void printArr(int arrIndx) {
    std::cout << arrIndx << std::endl;
}

int main() {
    std::array<int, 9> sortedArr = {1,2,3,4,5,6,7,8,9};
    std::array<int, 9> arrToSort = sortedArr;

    for (int i = 0; i < arrToSort.size(); i++) {
        printArr(arrToSort[i]);
    }
    return 0;
}
