#include "calculator.h"

int mx_add(int a, int b) {
    return a + b;
}

int mx_sub(int a, int b) {
    return a - b;
}

int mx_mul(int a, int b) {
    return a * b;
}

int mx_div(int a, int b) {
    return a / b;
}

int mx_mod(int a, int b) {
    return a % b;
}

void set_op(t_operation *data, enum e_operation eop) {
    switch (eop) {
        case SUB:
            data->f = &mx_sub;
            break;
        case ADD:
            data->f = &mx_add;
            break;
        case MUL:
            data->f = &mx_mul;
            break;
        case DIV:
            data->f = &mx_div;
            break;
        case MOD:
            data->f = &mx_mod;
            break;
        default:
            break;
    }
}

enum e_operation get_op(char c) {
    switch (c) {
        case '-':
            return SUB;
        case '+':
            return ADD;
        case '*':
            return MUL;
        case '/':
            return DIV;
        case '%':
            return MOD;
        default:
            return ADD;
    }
}

int mx_do_calc(t_args args) {
    t_operation sop;
    enum e_operation eop;

    sop.op = args.op;
    eop = get_op(sop.op);
    set_op(&sop, eop);
    return sop.f(args.a, args.b);
}
