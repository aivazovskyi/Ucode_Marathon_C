#include <stdbool.h>

static bool mx_isspace(char c) {
    if ((c > 8 && c < 14) || c == 32)
        return 1;
    else
        return 0;
}

int mx_atoi(const char *str) {
    long long int n = 0;
    int i = 0;
    int ch = 1;

    while (mx_isspace(str[i]) == 1)
        i++;
    if (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            ch = -1;
        i++;
    }
    while(str[i] > 47 && str[i] < 58) {
        n = n * 10 + str[i] - 48;
        if (ch == 1 && n > 2147483647)
            return -1;
        if (ch == -1 && n > 2147483648)
            return 0;
        i++;
    }
    return ch * n;
}
