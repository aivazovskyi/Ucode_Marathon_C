#include <stdlib.h>

static int mx_strlen(const char *s) {
    int i = 0;

    while(s[i] != '\0')
        i++;
    return i;
}

static char *mx_strnew(const int size) {
    char *new = NULL;

    if (size < 0)
        return NULL;
    new = (char *)malloc(sizeof(char) * (size + 1));
    for (int i = 0; i <= size; i++) {
        new[i] = '\0';
    }
    return new;
}

char *mx_strdup(const char *str) {
    char *copy = mx_strnew(mx_strlen(str));
    int i;

    for (i = 0; str [i] != '\0'; i++)
        copy[i] = str [i];
    copy[i] = '\0';
    return copy;
}
