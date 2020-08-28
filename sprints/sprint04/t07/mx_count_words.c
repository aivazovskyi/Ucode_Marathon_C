int mx_count_words(const char *str, char delimiter) {
    int i =0;
    int count = 0;
    for (i = 0 ; str[i] != '\0'; i++) {
        if (str[i] == delimiter && str[i+1] != '\0')
            i++;
        if (str[i] != delimiter) {
            count++;
            while((str[i]) != delimiter && str[i+1] != '\0' )
                i++;
        }        
    }
    return count;
}
