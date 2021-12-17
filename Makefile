# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kshantay <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 16:01:16 by kshantay          #+#    #+#              #
#    Updated: 2021/10/22 16:39:00 by kshantay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST = 			ft_atoi.c			ft_isalpha.c		ft_isdigit.c\
				ft_isalnum.c		ft_isascii.c		ft_toupper.c\
				ft_tolower.c		ft_isprint.c		ft_strlen.c\
				ft_memset.c			ft_bzero.c			ft_memcpy.c\
				ft_memmove.c		ft_strlcpy.c		ft_strlcat.c\
				ft_strchr.c			ft_strrchr.c		ft_strncmp.c\
				ft_memchr.c			ft_memcmp.c			ft_strnstr.c\
				ft_calloc.c			ft_strdup.c			ft_substr.c\
				ft_strjoin.c		ft_strtrim.c		ft_split.c\
				ft_itoa.c			ft_strmapi.c		ft_striteri.c\
				ft_putchar_fd.c		ft_putstr_fd.c		ft_putendl_fd.c\
				ft_putnbr_fd.c

OBJ = $(patsubst %.c,%.o,$(LIST))

CC = gcc

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

HEAD = libft.h

.PHONY : all clean fclean re

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean :
	rm -f $(NAME)

re : fclean all




static void	ft_arg(va_list ap, char format, int *count)
{
	if (format == 'd' || format == 'i' || format == 'u')
	{
	
	}
	else if (format == 'p')
	{

	}
	else if (format == '%')
	{
		write(1, "%", 1);
		*count += 1;
	}
	else if (format == 'x' || format == 'X')
	{

	}
}