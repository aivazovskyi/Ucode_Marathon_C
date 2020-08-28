#include "duplicate.h"
#include <stdio.h>

int main () {
    t_intarr *test = NULL;
    test = (t_intarr *)malloc(sizeof(t_intarr));

    t_intarr *output = NULL;
    output = (t_intarr *)malloc(sizeof(t_intarr));
    int arr1[] = {0, 2, 2, 2, 1, 5, 3, 4, 5};
    test->size = 9;
    test->arr = arr1;
    output = mx_del_dup_sarr(test);

    for(int i = 0; i < output->size; i++)
        printf("%i  ", output->arr[i]);

    // system("leaks -q a.out");
}
