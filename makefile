CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft.a
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c
SRC +=	ft_memcmp.c ft_memcpy.c ft_memove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c
SRC += ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_split.c
SRC += ft_itoa.c ft_strmapi.c ft_striteri.c ft_putstr_fd.c ft_putstr_fd.c ft_putnbr_fd.c
OBJ = $(SRC:.c=.o)
HAM = *.exe


all:
	$(CC) $(CFLAGS) -c $(SRC)
	@ar -rc $(LIBFT) $(OBJ)
	@ranlib $(LIBFT)
	@ar -t $(LIBFT)
clean:	
	@rm -f $(OBJ)
fclean:	clean
	@rm -f $(LIBFT)

re:	fclean all