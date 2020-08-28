#include <unistd.h>

void mx_printstr(const char *s) {
    int a = 0;

    while (s[a] != '\n')
        a++;
    write(1, s, a);    
}
