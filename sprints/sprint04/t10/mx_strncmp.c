// #include <string.h>
// #include <stdio.h>

int mx_strncmp(const char *s1, const char *s2, int n) {
    int i = 0;
    while (s1[i] == s2[i] && i < n - 1) {
        if (s1[i] == '\0' && s2[i] == '\0')
            return 0;
        i++;
    }
    return (const unsigned char)s1[i] - (const unsigned char)s2[i];
}

// int main() {
//     char line1[] = "123456";
//     char line2[] = "12345s";
//     printf("strcmp повертає %d\n\n", strcmp(line1, line2));
//     printf("strncmp повертає %d\n\n", strncmp(line1, line2, 1));

//     printf("mx_strncmp повертає %d\n\n", mx_strncmp(line1, line2, 1));
// }
