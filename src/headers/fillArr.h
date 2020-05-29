void fillArr(int arr[], int arrLen) {
    for(int i = 0; i < arrLen; i++) {
        arr[i] = i + 1;
    }

    //DEBUG
    /*for(int i = 0; i < arrLen; i++){
        std::cout << "Address: " << i << " : " << &arr[i] << std::endl;
    }*/
}
