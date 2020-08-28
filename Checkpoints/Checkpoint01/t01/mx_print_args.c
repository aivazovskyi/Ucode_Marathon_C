#include <unistd.h>

static int mx_strlen(const char *s) {
    int i = 0;

    while (s[i] != '\0')
        i++;    
    return i;
}

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        write(1, argv[i], mx_strlen(argv[i]));
        write(1, "\n", 1);
    }
}
