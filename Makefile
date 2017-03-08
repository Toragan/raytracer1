##
## Makefile for wolf3d in /home/gaumon_t/delivery/Infographie/wolf3d
## 
## Made by Gaumont Thomas
## Login   <gaumon_t@epitech.net>
## 
## Started on  Thu Dec 15 09:22:25 2016 Gaumont Thomas
## Last update Wed Mar  8 09:07:38 2017 Gaumont Thomas
##

NAME	=	raytracer1

SRCS	=	raytracer1.c		\
		src/calc_dir_vector.c	\
		src/translate.c		\
		src/rotate.c		\
		src/sphere.c		\
		src/plane.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-I include

CC	=	gcc

all	:	$(NAME)

debug	:	CFLAGS += -ggdb3
debug	:	fclean all

flags	:	CFLAGS += -W -Wall -Wextra -Werror
flags	:	fclean all

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) -lc_graph_prog -lm $(OBJS)

clean	:
		rm -f $(OBJS)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
