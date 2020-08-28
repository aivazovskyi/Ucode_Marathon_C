#include <time.h>

double mx_timer(void (*f)()) {
    double end;
    double begin;
    
    if (NULL == f)
        return -1;    
    begin = clock();    
    f();
    end = clock();
    if(end < 0 || begin < 0)
        return -1;
    else
        return (end - begin) / CLOCKS_PER_SEC;
}
