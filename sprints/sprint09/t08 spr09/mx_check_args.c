#include "calculator.h"

void print_err(const char *s) {
    write(2, s, mx_strlen(s));
}

void report_err(enum e_error err) {
    switch (err) {
        case INCORRECT_OPERAND:
            print_err(INCORRECT_OPERAND_TEXT);
            break;
        case INCORRECT_OPERATION:
            print_err(INCORRECT_OPERATION_TEXT);
            break;
        case DIV_BY_ZERO:
            print_err(DIV_BY_ZERO_TEXT);
            break;
        default:    
            print_err(USAGE_TEXT);
            break;
    }
    exit(1);
}

void check_number(const char *s) {
    if (!s || !s[0])
        report_err(INCORRECT_OPERAND);
    for (int i = 0; s[i]; ++i)
        if (!mx_isdigit(s[i])) {
            if (i != 0 || !(s[i] == '+' || s[i] == '-'))
                report_err(INCORRECT_OPERAND);
	}
}

void check_operation(const char *s) {
    if (!s || !s[0] || s[1])
        report_err(INCORRECT_OPERATION);
    if (s[0] != '+' && s[0] != '-' && s[0] != '*'
        && s[0] != '/' && s[0] != '%')
        report_err(INCORRECT_OPERATION);
}

void mx_check_args(int argc, char **argv) {
    char op;

    if (argc != 4 || NULL == argv)
        report_err(GENERAL_ERROR);
    check_operation(argv[2]);
    check_number(argv[1]);
    check_number(argv[3]);

    op = argv[2][0];
    if (op == '/' || op == '%') {
        int x = mx_atoi(argv[3]);
        if (x == 0)
            report_err(DIV_BY_ZERO);
    }
}

t_args mx_parse_args(char **argv) {
    t_args result;
    result.a = mx_atoi(argv[1]);
    result.b = mx_atoi(argv[3]);
    result.op = argv[2][0];
    return result;
}
