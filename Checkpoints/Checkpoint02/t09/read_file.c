#include <unistd.h>
#include <fcntl.h>

static int mx_strlen(const char *s) {
    int i = 0;

    while(s[i] != '\0')
        i++;
    return i;
}

static void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}

int main (int argc, char *argv[]) {
    char *buf;
    int content;

    if (argc != 2) {
        mx_printerr("usage: ./read_file [file_path]\n");
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
