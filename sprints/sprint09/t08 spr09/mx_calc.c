#include "calculator.h"

int main(int argc, char **argv) {
    mx_check_args(argc, argv);
    t_args args = mx_parse_args(argv);
    mx_printint(mx_do_calc(args));
    mx_printchar('\n');
    return 0;
}
