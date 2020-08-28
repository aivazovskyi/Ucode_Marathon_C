int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);

static void binary(unsigned n) {
    if (n > 1) {
        binary(n / 2);
    }
    mx_printint(n % 2);
} 

static void print_null(int a) {
    int len = 0;
    
        if (a == 0)
            len = 1;
        else if (a > 0) {
            while (a > 0) {
                a = a / 2;
                len++;
            }
        }
        for (int j = 0; j < 32 - len; j++)
            mx_printint(0);
}

int main(int argc, char *argv[]) {
    int a;

    for (int i = 1; i < argc; i++) {
        a = mx_atoi(argv[i]);
        if (a >= 0)
            print_null(a);
        binary(a);
        mx_printchar('\n');
    }
}
