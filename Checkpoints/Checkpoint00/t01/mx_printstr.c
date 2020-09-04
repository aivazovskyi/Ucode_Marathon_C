#include <unistd.h>

void mx_printstr(const char *s) {
    int a = 0;

    while (s[a] != '\0')
        a++;
    write(1, s, a);    
}
