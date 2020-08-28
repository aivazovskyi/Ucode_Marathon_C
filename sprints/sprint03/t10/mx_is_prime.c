#include <stdbool.h>

bool mx_is_prime(int num) {
    if ( num <= 0)
        return 0;
    for (int a = 2; a < num; a++ ) {
        if (num % a == 0)
        return 0;}
    return 1;
}
