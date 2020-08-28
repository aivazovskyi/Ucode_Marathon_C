void mx_str_reverse(char *s) {
    int i = 0;
    char tmp;
    
    while (s[i] != '\0')
        i++;
    i -=1;
    
    for (int j = 0; j < i; ) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        j++;
        i--;
    }
}
