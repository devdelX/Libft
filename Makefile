CC=gcc
FLAGS=-Wall -Wextra -Werror
AR= ar rcs
RM =rm  -rf
FILES= ft_isdigit ft_isprint\
	   ft_atoi ft_isalpha ft_isascii ft_strchr ft_memset ft_strlcat ft_strnstr\
	   ft_strlcpy ft_tolower ft_strlen ft_putstr_fd ft_putnbr_fd\
	   ft_toupper ft_memchr ft_isalnum ft_putchar_fd ft_putendl_fd\

SRC = $(FILES:=.c)
OBJ= $(FILES:=.o)
NAME =libft.a

.PHONY:all clean fclean re

all:$(NAME)

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
	%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
