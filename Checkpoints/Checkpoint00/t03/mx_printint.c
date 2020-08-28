#include <unistd.h>

void mx_printint(int n) {
    int a = 0;

    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0) {
        write(1,"-", 1);
        n *= -1;
    }
    if (n > 9)
        mx_printint(n / 10);
    a = n % 10 + 48;
    write(1, &a, 1);
}
