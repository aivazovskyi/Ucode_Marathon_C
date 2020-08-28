#include <stdlib.h>
#include <stdbool.h>

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    int tmp = 0;
    int i;
    int j;

    if (NULL == f || NULL == arr)
        return;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (f(arr[i], arr[j])) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
