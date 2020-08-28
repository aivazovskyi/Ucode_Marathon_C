#include "nbr_to_hex.h"

static int len_num (unsigned long nbr) {
    int len = 0;

    for (; nbr != 0; len++)
        nbr /= 16;
    return len;
}

char *mx_nbr_to_hex(unsigned long nbr) {
    char *num = NULL;
    int len = len_num(nbr);
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
        else if (tmp >= 10)
            num[--len] = 87 + tmp;
        nbr /= 16;
    }
    return num;
}
