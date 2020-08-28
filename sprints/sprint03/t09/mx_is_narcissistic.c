#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    int copy = num;
    int i = 0;

    while (copy != 0) {
        copy /= 10;
        i++; }

    copy = num;

    int j = i;
    int sum = 0;

    while(j > 0) {
        sum = sum + mx_pow(copy % 10, i);
        copy /= 10;
        j--; }
   
    if (sum == num)
        return 1;
    else 
        return 0; 
}
