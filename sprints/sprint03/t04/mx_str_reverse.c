int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
    int a = mx_strlen(s) - 1;
    int i = 0;
    
    while (i < a) {
        mx_swap_char(&s[i],&s[a]);
        i++;
        a--; }   
}
