# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 20:05:31 by cmunoz-c          #+#    #+#              #
#    Updated: 2023/10/13 19:40:49 by cmunoz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ARCHIVOS FUENTE
SRC =  ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstdelone.c

#REGLA BONUS
BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstclear.c ft_lstiter.c ft_lstmap.c


#GENERAR EL ARCHIVO OBJETO DE CADA ARCHIVO FUENTE
OBJS = $(SRC:.c=.o)
BONOBJS = $(BSRC:.c=.o)

# COMPILADOR
CC = cc

# FLAGS DE COMPILACION
CFLAGS = -Wall -Wextra -Werror

# NOMBRE DEL PROGRAMA
NAME = libft.a

# REGLA PARA COMPILAR LOS ARCHIVOS FUENTE
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

# 
all: $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus: $(objs) $(BONOBJS) 
		ar -rcs $(NAME) $(OBJS) $(BONOBJS)
                                                                
# LIMPIAR ARCHIVOS GENERADOS EXCEPTO EL EJECUTABLE
clean:
	rm -f $(OBJS) $(BONOBJS)

#LIMPIAAR ARCHIVOS GENERADOS INCLUIDO EL EJECUTABLE
fclean: clean
	rm -f $(NAME)

#
re: fclean all

.PHONY: all bonus clean fclean re
