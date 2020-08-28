int mx_strlen(const char *s) {
    int len = 0;

    while (s && s[len])
        ++len;
    return len;
}
