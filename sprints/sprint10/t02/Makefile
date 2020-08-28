NAME = mx_cat

SRCS = src/mx_strlen.c src/mx_printerr.c src/main.c
SRCSOB = mx_strlen.c mx_printerr.c main.c 

INC = inc/header.h
INCOB = header.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: $(NAME) clean

$(NAME):
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) $(SRCSOB) -I $(INCOB)

uninstall: clean
	@rm -rf $(NAME)

clean:
	@rm -rf $(SRCSOB) $(INCOB) *.c

reinstall: uninstall clean all
