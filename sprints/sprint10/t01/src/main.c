#include "header.h"

static void mx_wrong_src(char *s) {
    mx_printerr("usage: ");
    mx_printerr(s);
    mx_printerr(" [source_file] [destination_file]\n");
}

static void mx_copy(int src, int copy) {
    char *buf;

    while (read(src, &buf, 1))
        write(copy, &buf, 1);
    close(src);
    close(copy);
}

int main (int argc, char *argv[]) {
    int src;
    int copy;

    if (argc != 3) {
        mx_wrong_src(argv[0]);     
        return -1;
    }
    src = open(argv[1], O_RDONLY);
    if (src == -1) {
        mx_printerr("mx_cp: ");
        mx_printerr(argv[1]);
        mx_printerr(": No such file or directory\n");
        return -1;
    }
    copy = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IRUSR | S_IWUSR);
    if (copy == -1)
        return -2;
    else
        mx_copy(src, copy);
    exit(0);
}
