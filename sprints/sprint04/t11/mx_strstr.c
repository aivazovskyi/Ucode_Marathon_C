// #include <stdio.h>
// #include <string.h>

int mx_strlen(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2) {
    const char *p = s1;
    
    if (mx_strlen(s2) == 0)
        return (char *) p;
    for (; (p = mx_strchr(p, *s2)) != 0; p++) {
        if (mx_strncmp(p, s2, mx_strlen(s2)) == 0)
            return (char *) p;
    }
    return 0;
}

// int main() {
       
//     char *string = "12345679";
//     char *cmp = "321";

//     printf("Original function on strstr --- [%s]\n", strstr(string, cmp));

//     printf("My function on strstr --- [%s]\n", mx_strstr(string, cmp));
// }


// THIS FUNCTION WORKS!!!

// char *tmps1 = (char *) s1;
//     char *tmps2 = (char *) s2;

//     if ((*s1 != '\0') || (!s2))
//         return 0;
//     if (!mx_strlen(s2))
//         return tmps1;
//     while (*tmps1) {
//         if (!mx_strncmp(tmps1, tmps2, mx_strlen(tmps2)))
//             return tmps1;
//         tmps1++;
//     }
//     return 0;
