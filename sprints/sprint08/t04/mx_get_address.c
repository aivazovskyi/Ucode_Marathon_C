#include "get_address.h"

char *mx_get_address(void *p) {
    char *tmp = mx_nbr_to_hex((unsigned long) p);
    char *adress = mx_strnew(mx_strlen(tmp) + 2);
    char *head = NULL;

    adress[0] = '0';
    adress[1] = 'x';
    head = adress;
    adress += 2;
    adress = mx_strcpy(adress, tmp);
    adress = head;
    free(tmp);
    free(head);
    return adress;
}
