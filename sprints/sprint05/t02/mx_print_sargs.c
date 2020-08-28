void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int agrc, char *argv[]) {
    char *tmp;

    for (int i = 1; i < agrc - 1; i++) {
       for (int j = agrc - 1; j > i; j--) {
            if ((mx_strcmp(argv[j-1], argv[j])) > 0) {
                tmp = argv[j - 1];
                argv[j - 1] = argv[j];
                argv[j] = tmp;
            }
        }
    }
    for (int i = 1; i < agrc; i++) {
        mx_printstr(argv[i]);
        mx_printstr("\n");
    }
}
