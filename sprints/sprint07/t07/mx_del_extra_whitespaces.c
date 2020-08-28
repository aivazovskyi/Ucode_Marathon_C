#include <stdlib.h>
#include <stdbool.h>

bool mx_isspace(char c);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
void mx_strdel(char **str);
char *mx_strtrim(const char *str);

char *mx_del_extra_whitespaces(const char *str) {
    char *cleared = NULL;
    char *tmp = NULL;
    int j = 0;

    if (!str)
        return NULL;
    else
        tmp = mx_strnew(mx_strlen(str));
        for (int i = 0; str[i] != '\0'; i++) {
            if (mx_isspace(str[i]) == 0) {
                tmp[j] = str[i];
                j++;
            }
            if (mx_isspace(str[i]) == 0 && mx_isspace(str[i + 1]) == 1) {
                tmp[j] = ' ';
                j++;
            }
        }
        cleared = mx_strtrim(tmp);
        mx_strdel(&tmp);
        return cleared;
}
