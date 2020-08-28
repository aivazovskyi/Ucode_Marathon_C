#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);

int main(int agrc, char *argv[]) {
    int sum = 0;

    for (int i = 1; i < agrc; i++) {        
        sum = sum + mx_atoi(argv[i]);
    }

    mx_printint(sum);
    mx_printchar('\n');

}
