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
