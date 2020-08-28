#include "header.h"

static void mx_for_counting(char *argv[], int *sum, int i) {
    char *s = NULL;

    sum[3] = 0;
    s = mx_file_to_str(argv[i]);
    mx_count_str(sum, s);
    mx_count_words_and_chars(sum, s);
    write(1, "\t", 1);
    mx_printstr(argv[i]);
    write(1, "\n", 1);
}

static void mx_counting(int argc, char *argv[], int *sum, int i) {
    for (i = 1; i < argc; i++) {
        sum[4] = open(argv[i], O_RDONLY | O_DIRECTORY);
        if (sum[4] > 0) {
            mx_printerr("mx_wc: ");
            mx_printerr(argv[i]);
            mx_printerr(": read: Is a directory\n");
            close(sum[4]);
            continue;
        }
        sum[4] = open(argv[i], O_RDONLY);
        if (sum[4] == -1) {
            mx_printerr("mx_wc: ");
            mx_printerr(argv[i]);
            mx_printerr(": open: No such file or directory\n");
        }
        else {
            mx_for_counting(argv, sum, i);
        }
        close(sum[4]);
    }
}

static void mx_print_sum(int *sum, int i) {
        for (i = 0; i < 3; i++) {
            write(1, "\t", 1);
            mx_printint(sum[i]);
        }
        write(1, "\ttotal\n", 7);
}

/*
 * sum[3] used for counting(changed str),
 * sum[4] - for opening files(changed wc) :)
 */

int main (int argc, char *argv[]) {
    char *s = NULL;
    char buf[1024];
    int i = 0;
    int sum[5];
    int size;

    if (argc == 1) {
        while ((size = read(0, &buf, sizeof(buf)))) {
            buf[size] = '\0';
            s = mx_strjoin(s, buf);
        }
        mx_count_str(sum, s);
        mx_count_words_and_chars(sum, s);
        write(1, "\n", 1);
        return 0;
    }
    mx_counting(argc, argv, sum, i);
    if (argc > 2) {
        mx_print_sum(sum, i);
    }
    exit(0);
}
