# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 13:01:05 by dida-sil          #+#    #+#              #
#    Updated: 2022/09/05 18:38:26 by dida-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# +>                                     NAMES 

NAME			= minitalk

NAME_BONUS		= minitalk_bonus

CLIENT			= client

SERVER			= server

SERVER_BONUS	= server_bonus

CLIENT_BONUS	= client_bonus

LIBFT			= libft.a

LIBFT_DIR		= libft/

# +>                                     COMPILATION

CLT_SRCS	= client.o

SRV_SRCS	= server.o

CLT_OBJS	= $(CLT_SRCS:.c=.o)

SRV_OBJS	= $(SRV_SRCS:.c=.o)

# +>									 BONUS COMPILATION

CLT_SRCS_BONUS	= client_bonus.o

SRV_SRCS_BONUS	= server_bonus.o

CLT_OBJS_BONUS	= $(CLT_SRCS_BONUS:.c=.o)

SRV_OBJS_BONUS	= $(SRV_SRCS_BONUS:.c=.o)

AR			= ar rcs
RM			= rm -rf
CC			= cc
MAKE		= make -C
CFLAGS		= -g -Wall -Wextra -Werror
MAKEFLAGS	= silent

# +>                                     RULES

all:				$(NAME)

bonus:				$(NAME_BONUS)

$(NAME):			$(LIBFT) $(CLIENT) $(SERVER)

$(NAME_BONUS):		$(LIBFT) $(CLIENT_BONUS) $(SERVER_BONUS) 

$(LIBFT):			$(LIBFT_DIR)$(LIBFT)
				cp  $(LIBFT_DIR)$(LIBFT) ./

$(LIBFT_DIR)$(LIBFT):
					$(MAKE) $(LIBFT_DIR)

$(CLIENT):	$(CLT_OBJS)
					$(CC) $(CFLAGS) $(CLT_OBJS) $(LIBFT) -o $(CLIENT)

$(SERVER):	$(SRV_OBJS)
					$(CC) $(CFLAGS) $(SRV_OBJS) $(LIBFT) -o $(SERVER)

$(CLIENT_BONUS):	$(CLT_OBJS_BONUS)
					$(CC) $(CFLAGS) $(CLT_OBJS_BONUS) $(LIBFT) -o $(CLIENT_BONUS)

$(SERVER_BONUS):	$(SRV_OBJS_BONUS)
					$(CC) $(CFLAGS) $(SRV_OBJS_BONUS) $(LIBFT) -o $(SERVER_BONUS)

clean:
					$(RM) $(CLT_OBJS)
					$(RM) $(SRV_OBJS)
					$(MAKE) $(LIBFT_DIR) clean

fclean: clean
					$(RM) $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS) $(LIBFT) $(SRV_OBJS_BONUS) $(CLT_OBJS_BONUS)
					$(MAKE) $(LIBFT_DIR) fclean 

re:					fclean all

.PHONY:				all clean fclean re bonus 