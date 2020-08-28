void mx_printchar(char c);

void mx_hexadecimal() {
    for (int i = 0x30; i < 0x3a; i++)
        mx_printchar(i);
    for (int i = 0x41; i < 0x47; i++)
        mx_printchar(i);
    mx_printchar('\n');
}

/*
int main(void) {
    mx_hexadecimal();
    return 0;
}
*/
