# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tesingh <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 09:41:42 by tesingh           #+#    #+#              #
#    Updated: 2024/04/02 09:41:46 by tesingh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

FILES =	ft_isalpha \
		ft_isdigit \
		ft_memset \
		ft_strlen \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_toupper \
		ft_tolower \
		ft_strncmp \
		ft_memchr \
		ft_memcmp \
		ft_strnstr \
		ft_atoi \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_putnbr_base_fd \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \

FILES_B =	ft_lstnew \
	  		ft_lstadd_front \
	  		ft_lstsize \
	  		ft_lstlast \
	  		ft_lstadd_back \
	  		ft_lstdelone \
	  		ft_lstclear \
	  		ft_lstiter \
	  		ft_lstmap \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))


.c.o: $(SRCS)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	@$(AR) $@ $^

bonus: $(OBJS_B)
	@$(AR) $(NAME) $^

all: $(NAME)

clean:
	@$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	@$(RM) $(NAME)

re: clean all

.PHONY: bonus all clean fclean re
