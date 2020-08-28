int mx_popular_int(const int *arr, int size) {
    int count = 1;
    int tmpCount = 0;
    int popular = arr[0];

    for (int i = 0; i < (size - 1); i++) {
        tmpCount = 0;    
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j])
                tmpCount++;
        }
        if (tmpCount > count) {
            popular = arr[i];
            count = tmpCount;
        }
    }
    return popular;
}
