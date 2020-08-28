#include <stdlib.h>

char *mx_strnew(const int size) {
    char *allochere = NULL;

    if (size < 0)
        return NULL;
    allochere = (char *)malloc(sizeof(char) * (size + 1));
    for (int i = 0; i <= size; i++)
        allochere[i] = '\0';
    return allochere;    
}
