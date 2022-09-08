# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 13:01:30 by dida-sil          #+#    #+#              #
#    Updated: 2022/08/23 14:44:06 by dida-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# +>                                     NAMES 

NAME		= libft.a 

PRINTF		= libftprintf.a 

PRINTF_DIR	= ft_printf/
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     SRCS 

SRCS	= ft_atoi.c       \
		  ft_bzero.c      \
		  ft_calloc.c     \
		  ft_isalnum.c    \
		  ft_isalpha.c    \
		  ft_isascii.c    \
		  ft_isdigit.c    \
		  ft_isprint.c    \
		  ft_itoa.c       \
		  ft_memchr.c     \
		  ft_memcmp.c     \
		  ft_memcpy.c     \
		  ft_memmove.c    \
		  ft_memset.c     \
		  ft_nbrlen.c     \
		  ft_putchar_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c  \
		  ft_putstr_fd.c  \
		  ft_split.c      \
		  ft_strchr.c     \
		  ft_strdup.c     \
		  ft_striteri.c   \
		  ft_strjoin.c    \
		  ft_strlcat.c    \
		  ft_strlcpy.c    \
		  ft_strlen.c     \
		  ft_strmapi.c    \
		  ft_strncmp.c    \
		  ft_strnstr.c    \
		  ft_strrchr.c    \
		  ft_strtrim.c    \
		  ft_substr.c     \
		  ft_tolower.c    \
		  ft_toupper.c

OBJS	= $(SRCS:.c=.o)
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                    ALIASES 

AR			= ar rcs
RM			= rm -rf
CC			= cc
MAKE		= make -C
CFLAGS		= -g -Wall -Wextra -Werror
MAKEFLAGS	+= --silent

# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
# +>                                     RULES 

all:	$(NAME)

$(NAME): $(OBJS) $(PRINTF)
	$(AR) $(NAME) $(OBJS)
	
$(PRINTF): $(PRINTF_DIR)$(PRINTF)
	cp $(PRINTF_DIR)$(PRINTF) ./$(NAME)

$(PRINTF_DIR)$(PRINTF):
	$(MAKE) $(PRINTF_DIR)

clean:
	$(RM) $(OBJS)

	$(MAKE) $(PRINTF_DIR) clean

fclean:	clean
	$(RM) $(NAME)

	$(RM) $(PRINTF_DIR)$(PRINTF)

re:	recompiling fclean all

compiled:
	printf "[$(NAME)] Compiled!\n"

.PHONY:		all clean fclean re
# <+-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-' #
