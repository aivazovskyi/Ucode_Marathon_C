int mx_strcmp(const char *s1, const char*s2) {
    while (*s1 == *s2) {
        if (*s1 == '\0' && *s2 == '\0')
            return 0;
        s1++;
        s2++;
    }
    return (unsigned const char) *s1 - (unsigned const char) *s2;
}
