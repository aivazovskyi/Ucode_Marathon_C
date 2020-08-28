NAME	=	minilibmx.a

CFLG	=	-std=c11 -Wall -Wextra -Werror -Wpedantic
COMP 	= 	clang

SRCD	=	src
INCD	=	inc
OBJD	=	obj

INC		=	minilibmx.h
INCS	=	$(addprefix $(INCD)/, $(INC))

SRC	= 	mx_atoi.c mx_isdigit.c mx_isspace.c mx_printchar.c mx_printint.c \
		mx_printstr.c mx_strcmp.c mx_strcpy.c mx_strlen.c

SRCS	=	$(addprefix $(SRCD)/, $(SRC))
OBJS	=	$(addprefix $(OBJD)/, $(SRC:%.c=%.o))

all: install

install: MINILIBMX

MINILIBMX: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^
	@printf "\r\33[2K$@\t   \033[32;1mcreated\033[0m\n"

$(OBJD)/%.o: $(SRCD)/%.c $(INCS)
	@$(COMP) $(CFLG) -c $< -o $@ -I$(INCD)
	@printf "\r\33[2K$(NAME)\t   \033[33;1mcompile \033[0m$(<:$(SRCD)/%.c=%) "

$(OBJS): | $(OBJD)

$(OBJD):
	@mkdir -p $@

clean:
	@rm -rf $(OBJD)
	@printf "$(OBJD)\t   \033[31;1mdeleted\033[0m\n"
	@rm -rf a.out

uninstall: clean
	@rm -rf $(NAME)
	@printf "$(NAME)\t   \033[31;1muninstalled\033[0m\n"

reinstall: uninstall install

start: 
	@$(COMP) $(CFLG) tmain.c minilibmx.a && ./a.out
