#include "header.h"

int main (int argc, char *argv[]) {
    char *buf;
    int content;

    if (argc != 2) {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [file_path]\n");
        return -1;
    }
    content = open(argv[1], O_RDONLY);
    if (content == -1) {
        mx_printerr("error\n");
        return -1;
    }
    else
        while (read(content, &buf, 1))
            write(1, &buf, 1);
    close(content);
    return 0;
}
