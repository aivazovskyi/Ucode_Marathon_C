#include <unistd.h>

void mx_printchar(char c) {
    write (1, &c, 1);
}

/*
 *int main (void) {
 *   int i = 65;
 *   mx_printchar(i);
 *}
 */
