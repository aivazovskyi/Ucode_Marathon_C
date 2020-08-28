#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s) {
    write (1, s, mx_strlen(s));
}

/*
int main (void) {
    const char s[] = "It's alive!";
    mx_printstr (s);
    return 0;
}*/
