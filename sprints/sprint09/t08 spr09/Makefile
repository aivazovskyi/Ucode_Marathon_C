CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

SRC_DIR = src
INC_DIR = inc

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
SRC_FILES_NO_DIR = $(notdir $(SRC_FILES))
FILE_NAMES = $(SRC_FILES_NO_DIR:%.c=%)
NAME = calc

all: install clean

install: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) $(SRC_FILES) -I$(INC_DIR) -o $(NAME)

uninstall: clean
	@rm -f $(NAME)

clean:

reinstall: uninstall all
