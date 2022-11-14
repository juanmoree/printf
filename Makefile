# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jumoreno <jumoreno@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 15:37:10 by jumoreno          #+#    #+#              #
#    Updated: 2022/11/14 17:09:53 by jumoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME: libftprintf.a

INCLUDE = -I ./

SRCS = ft_putchar.c

OBJS = $(SRCS: .c=.o)

DEPS = $(SRCS: .c=.d)

AR = ar
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $(OBJS)
	@echo "Library OK"

-include $(DEPS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
