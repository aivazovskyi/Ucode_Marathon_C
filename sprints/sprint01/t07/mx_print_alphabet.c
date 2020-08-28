void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (int i = 65 ; i < 91; i++)
            if ( i % 2 == 0) {
                i += 32;
                mx_printchar(i);
                i -= 32;}
            else mx_printchar(i);
    mx_printchar('\n');
}


int main(void) {
    mx_print_alphabet();
    return 0;
}
