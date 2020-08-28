#include "get_address.h"

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

    num = mx_strnew(len);
    if (nbr == 0) {
        num = "0";
        return num;
    }
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
