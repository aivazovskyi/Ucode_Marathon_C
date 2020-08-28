int mx_strlen(const char *s);
char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub) {
    int i = 0;
    const char *buf = str;

    if (mx_strlen(sub) == 0 || mx_strlen(str) == 0)
        return 0;
    while ((buf = mx_strstr(buf, sub)) != 0) {
        buf++;
        i++;
    }    
    return i;
}
