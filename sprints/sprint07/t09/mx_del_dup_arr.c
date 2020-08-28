#include <stdlib.h>
#include <stdio.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    int *result = NULL;
    int size = 0;
    int count = 0;
    if (src == NULL)
        return NULL;
    for(int i = 0; i < src_size; i++)
        for(int j = i+1; j < src_size; j++)
            if (src[i] == src[j])
                size++;
    *dst_size = src_size - size;
    result = mx_copy_int_arr(src, *dst_size);
    int flag = 1;
    for(int i = 0; i < src_size; i++){
        flag = 1;
        for(int j = 0; j < *dst_size; j++)
            if (src[i] == result[count])
                flag = 0;
        if (flag)
            count++;
        result[count] = src[i];
    }
    return result;
}
int main () {
    int arr[] = {0, 2, 2, 2, 1, 5, 3, 4, 5};
    int lenth = 0;
    int *dst_arr = mx_del_dup_arr(arr, 9, &lenth);
    for(int i = 0; i < lenth; i++)
        printf("%i  ", dst_arr[i]);
}
