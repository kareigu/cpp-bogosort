int * fillArr(int * arrLen) {
    static int arr[9000];
    if(*arrLen > 9000) { *arrLen = 8; }

    for(int i = 0; i < *arrLen; i++){
        arr[i] = i + 1;
    }
    return arr;
}
