#include <stdlib.h>

char *mx_strnew(const int size) {
    char *new = NULL;

    if (size < 0)
        return NULL;
    new = (char *)malloc(sizeof(char) * (size + 1));
    for (int i = 0; i <= size; i++) {
        new[i] = '\0';
    }
    return new;
}

static int mx_len_of_num(unsigned long nbr) {
    int len = 0;

    for ( ; nbr != 0; len++)
        nbr /= 16;
    return len;
}

char *mx_nbr_to_hex(unsigned long nbr) {
    char *num = NULL;
    int len = mx_len_of_num(nbr);
    int tmp; 

    if (nbr == 0) {
        num = mx_strnew(1);
        num[0] = '0';
        return num;
    }
    num = mx_strnew(len);
    while (nbr) {
        tmp = nbr % 16;
        if (tmp < 10)
            num[--len] = 48 + tmp;
        else if (nbr >= 10)
            num[--len] = 87 + tmp;
        nbr /= 16;
    }
    return num;
}
