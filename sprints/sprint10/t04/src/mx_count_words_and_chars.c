#include "header.h"

void mx_count_words_and_chars(int *sum, char *s) {
    int j = 0;

    for (j = 0; s[j] != '\0'; j++) {
        if (( s[j] > 8 && s[j] < 14 ))
            s[j] = ' ';
    }
    sum[3] = mx_count_words(s, ' ');
    write(1, "\t", 1);
    mx_printint(sum[3]);
    sum[1] = sum[1] + sum[3];
    sum[3] = mx_strlen(s);
    sum[2] = sum[2] + sum[3];
    write(1, "\t", 1);
    mx_printint(sum[3]);    
}
