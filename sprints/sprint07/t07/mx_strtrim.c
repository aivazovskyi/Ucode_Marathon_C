#include <stdlib.h>
#include <stdbool.h>

bool mx_isspace(char c);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
void mx_strdel(char **str);


char *mx_strtrim(const char *str) {
    char *cleared = NULL;
    int len;

    if (!str)
        return NULL;
    while(mx_isspace(*str) == 1)
        str++;
    len = mx_strlen(str);
    for (int i = len - 1; mx_isspace(str[i]) == 1; i--) {
        len--;
    }
    cleared = mx_strnew(len);
    cleared = mx_strncpy(cleared, str, len);
    return cleared;
}
