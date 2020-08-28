clang -c -std=c11 -Wall -Wextra -Werror -Wpedantic *.c 
ar rc minilibmx.a *.o
ranlib minilibmx.a
rm -rf *.o