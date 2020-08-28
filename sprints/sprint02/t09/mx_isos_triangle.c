void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
    for (unsigned int i = 0; i < length; i++) {
        mx_printchar(c);
        for (unsigned int m = 0; m < i; m++)
            mx_printchar(c);
        mx_printchar('\n');}
}

int main() {
    mx_isos_triangle(5, '*');
}

