#include <ctime>

void randArr(int arr[], int arrLen) {
    std::srand(std::time(nullptr));
    for (int i = 0; i < arrLen + std::rand() % 8; i++) {
        int a = std::rand() % arrLen;
        int b = std::rand() % arrLen;
        int h = arr[a];


        arr[a] = arr[b];
        arr[b] = h;
    }
}
