#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    int *new_arr = NULL;

    if (NULL == src || size <= 0)
        return NULL;
    new_arr = (int *)malloc(sizeof(int) * (size));
    for (int i = 0; i < size; i++)
        new_arr[i] = src[i];
    return new_arr;
}

// #include <stdio.h>

// int main() {
//     int arr1[] = {1, 2, 3, 5, 6, 13};
//     int *arr2;

//     arr2 = mx_copy_int_arr(arr1, 6);

//     for (int i = 0; i < 6; i++)
//         printf("%d ", arr2[i]);
// }
