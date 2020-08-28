#include <unistd.h>

static int mx_strlen(const char *s) {
    int i = 0;

    while (s[i] != '\0')
        i++;    
    return i;
}

static void mx_printchar(char c) {
    write (1, &c, 1);
}

static void mx_printint(int n) {
    if (n > 9)
        mx_printint(n / 10);
    mx_printchar(n % 10 + 48);
}

int main(int argc, char *argv[]) {
    write(1, argv[0], mx_strlen(argv[0]));
    write(1, "\n", 1);
    mx_printint(argc);
    write(1, "\n", 1);
}
