#include "duplicate.h"

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    int size = 0;
    int count = 0;
    int flag;
    int i;
    int j;

    t_intarr *result = NULL;
    result = (t_intarr *)malloc(sizeof(t_intarr));
    if (src->arr == NULL)
        return result;
    for(i = 0; i < src->size; i++)
        for(j = i + 1; j < src->size; j++)
            if (src->arr[i] == src->arr[j])
                size++;
    result->size = (*src).size - size;
    result->arr = mx_copy_int_arr(src->arr, result->size);
    flag = 1;
    for(i = 0; i < src->size; i++){
        flag = 1;
        for(j = 0; j < result->size; j++)
            if (src->arr[i] == result->arr[count])
                flag = 0;
        if (flag)
            count++;
        result->arr[count] = src->arr[i];
    }
    return result;
}
