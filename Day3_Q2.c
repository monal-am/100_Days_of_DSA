int missingNum(int *arr, int size) {
    int missing = 1;

    for (int i = 0; i < size; i++) {
        missing += (i + 2) - arr[i];
    }

    return missing;
}
