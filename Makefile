CC=gcc
FLAGS=-Wall -Wextra -Werror
AR= ar rcs
RM =rm  -rf
FILES= ft_isdigit ft_isprint ft_bzero ft_strncmp ft_strrchr ft_memcpy ft_memcmp ft_itoa ft_split\
	   ft_atoi ft_isalpha ft_isascii ft_strchr ft_memset ft_strlcat ft_strnstr ft_strjoin ft_striteri\
	   ft_strlcpy ft_tolower ft_strlen ft_putstr_fd ft_putnbr_fd ft_memmove ft_strdup ft_strtrim\
	   ft_toupper ft_memchr ft_isalnum ft_putchar_fd ft_putendl_fd ft_calloc ft_substr ft_strmapi\

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
