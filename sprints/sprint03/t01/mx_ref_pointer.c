/*#include <stdio.h>*/

void mx_ref_pointer(int i, int ******ppppppi) {
    ******ppppppi = i;
}

/*int main() 
{
    int i = 10;
    int *pi = &i;
    int **ppi = &pi;
    int ***pppi = &ppi;
    int ****ppppi = &pppi;
    int *****pppppi = &ppppi;
   
    mx_ref_pointer(55, &pppppi);
    
    printf("%d\n", i);
    return 0;
}*/
