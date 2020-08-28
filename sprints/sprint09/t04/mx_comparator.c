#include <stdbool.h>
#include <unistd.h>

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int)) {
    if (NULL == arr || NULL == compare)
        return -1;
    for (int i = 0; i < size; i++) {
        if (compare(x, arr[i])) {
            return i;
        }
    }
    return -1;
}
