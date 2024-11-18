# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 16:35:09 by nbuchhol          #+#    #+#              #
#    Updated: 2024/11/18 13:47:08 by nbuchhol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

# Compilation definitions

CC = cc
CFLAGS = -Wall -Wextra -Werror

# Directories definitions

INCLUDES = -Iincludes
SRCDIR = ./src
SRC = ${SRCDIR}/ft_putchar.c \
	  ${SRCDIR}/ft_handle_types.c \
	  ${SRCDIR}/ft_parse_format.c \
	  ${SRCDIR}/ft_printf.c
OBJDIR = ./objs
OBJ = ${patsubst ${SRCDIR}/%.c, ${OBJDIR}/%.o, ${SRC}}

# Extra definitions

RM = rm -rf

all: ${NAME}

${NAME}: ${OBJDIR} ${OBJ}
	ar rcs ${NAME} ${OBJ}

${OBJDIR}:
	@mkdir -p ${OBJDIR}

${OBJDIR}/%.o: ${SRCDIR}/%.c
	@${CC} ${CFLAGS} ${INCLUDES} -c $< -o $@

clean:
	${RM} ${OBJDIR}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
