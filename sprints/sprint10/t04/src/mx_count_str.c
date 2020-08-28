#include "header.h"

void mx_count_str(int *sum, char *s) {
    int j = 0;
            
    for (; s[j] != '\0'; j++) {
        if (s[j] == '\n')
            sum[3]++;
    }
    write(1, "\t", 1);            
    mx_printint(sum[3]);            
    sum[0] = sum[0] + sum[3];
}
