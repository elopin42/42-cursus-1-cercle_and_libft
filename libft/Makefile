NAME = libft.a

CC = cc
CFLAGS = -I${INCLUDES} -Wall -Wextra -Werror

INCLUDES =    ./
OBJS =        ${SRCS:.c=.o}
SRCS =        ./ft_atoi.c                    \
            ./ft_bzero.c                \
            ./ft_calloc.c                \
            ./ft_isalnum.c                \
            ./ft_isalpha.c                \
            ./ft_isascii.c                \
            ./ft_isdigit.c                \
            ./ft_isprint.c                \
            ./ft_memchr.c                \
            ./ft_memcmp.c                \
            ./ft_memcpy.c                \
            ./ft_memmove.c                \
            ./ft_memset.c                \
            ./ft_strchr.c                \
            ./ft_strdup.c                \
            ./ft_strlcat.c                \
            ./ft_strlcpy.c                \
            ./ft_strlen.c                \
            ./ft_strncmp.c                \
            ./ft_strnstr.c                \
            ./ft_strrchr.c                \
            ./ft_tolower.c                \
            ./ft_toupper.c
BOBJS =        ${BSRCS:.c=.o}
BSRCS :=     ${SRCS}
all: ${NAME}

${NAME}: ${OBJS}
	ar -cr ${NAME} ${OBJS}

bonus: ${BOBJS}
	ar -cr ${NAME} ${BOBJS}

clean:
	rm -f ${OBJS}
	rm -f ${BOBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all