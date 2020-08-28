#include "header.h"

int main (int argc, char *argv[]) {
    char buf;
    int cat;

    if (argc == 1) {
        while (read(0, &buf, 1))
            write(1, &buf, 1);
    }
    for (int i = 1; i < argc; i++) {
        cat = open(argv[i], O_RDONLY);
        if (cat == -1) {
            mx_printerr("mx_cat: ");
            mx_printerr(argv[i]);
            mx_printerr(": No such file or directory\n");
        }
        else
            while (read(cat, &buf, 1))
                write(1, &buf, 1);
        close(cat);
    }
    exit(0);
}
