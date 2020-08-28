void mx_printstr(const char *s);

int main(int agrc, char *argv[]) {
    int i;

    for (i = 1; i < agrc; i++) {
        mx_printstr(argv[i]);
        mx_printstr("\n");
    }
}
