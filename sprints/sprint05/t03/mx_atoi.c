#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str) {
    unsigned long long int number = 0;
    int i = 0;
    int ch = 1;

    if(str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            ch = -1;
        i++;
    }    
    while(mx_isdigit(str[i]) == 1) {
        number =  number  * 10 + (str [i] - '0');
        if (str[i + 1] == '\0')
            return ch * number;    
        if (mx_isdigit(str[i + 1]) == 0)
            return 0;
        i++;
    }   
    return 0;
}
