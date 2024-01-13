# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/13 13:22:14 by cmunoz-c          #+#    #+#              #
#    Updated: 2024/01/13 16:18:00 by cmunoz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# ARCHIVOS FUENTE
SRC =  ft_putchar.c 

#GENERAR EL ARCHIVO OBJETO DE CADA ARCHIVO FUENTE
OBJS = $(SRC:.c=.o)

# COMPILADOR
CC = cc

# FLAGS DE COMPILACION
CFLAGS = -Wall -Wextra -Werror

# NOMBRE DEL PROGRAMA
NAME = libftprintf.a

# REGLA PARA COMPILAR LOS ARCHIVOS FUENTE
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

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

.PHONY: all bonus clean fclean re