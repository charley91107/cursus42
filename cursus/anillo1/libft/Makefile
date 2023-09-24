# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmunoz-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/13 20:05:31 by cmunoz-c          #+#    #+#              #
#    Updated: 2023/09/24 18:55:45 by cmunoz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ARCHIVOS FUENTE
SRC =  ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c

#GENERAR EL ARCHIVO OBJETO DE CADA ARCHIVO FUENTE
OBJS = $(SRC:.c=.o)

# COMPILADOR
CC = cc

# FLAGS DE COMPILACION
CFLAGS = -Wall -Wextra -Werror

# NOMBRE DEL PROGRAMA
NAME = libft.a

# REGLA PARA COMPILAR LOS ARCHIVOS FUENTE
.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

# 
all: $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

# LIMPIAR ARCHIVOS GENERADOS EXCEPTO EL EJECUTABLE
clean:
	rm -f $(OBJS)

#LIMPIAAR ARCHIVOS GENERADOS INCLUIDO EL EJECUTABLE
fclean: clean
	rm -f $(NAME)

#
re: fclean all
