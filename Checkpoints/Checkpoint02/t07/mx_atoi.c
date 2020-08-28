#include <limits.h>

int mx_atoi(const char *str) {
    unsigned long long int n = 0;
    int i = 0;
    int ch = 1;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            ch = -1;
        i++;
    }
    while(str[i] > 47 && str[i] < 58) {
        if (ch == -1)
            if ((n > -(LONG_MIN / 10)) 
                || ((n == -(LONG_MIN / 10)) && (str[i] - 48 > -(LONG_MIN % 10))))
                return 0;
        if ((n > (LONG_MAX / 10)) || ((n == (LONG_MAX / 10)) && (str[i] - 48 > LONG_MAX % 10)))
            return -1;
        n = n * 10 + str[i] - 48;
        i++;
    }
    return ch * n;
}
