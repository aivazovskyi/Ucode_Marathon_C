#pragma once

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/errno.h>

int mx_strlen(const char *s);
void mx_printerr(const char *s);
char *mx_strnew(const int size);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
char *mx_strcat(char *s1, const char *s2);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_file_to_str(const char *filename);
int mx_count_words(const char *str, char delimiter);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
void mx_count_words_and_chars(int *sum, char *s);
void mx_count_str(int *sum, char *s);
