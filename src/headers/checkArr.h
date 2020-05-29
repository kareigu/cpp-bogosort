bool checkArr(int sArr[], int tArr[], int arrLen) {
    for (int i = 0; i < arrLen; i++) {
        if(sArr[i] != tArr[i]) {return false;}
    }
    return true;
}
