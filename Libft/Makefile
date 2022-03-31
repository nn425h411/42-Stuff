NAME	= libft.a
SD		= srcs/
OD		= objs/
BD		= bonus/
SRCF	=	ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strlen.c  \
			ft_strdup.c  \
			ft_strchr.c  \
			ft_strrchr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_striteri.c \
			ft_strncmp.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_substr.c \
			ft_strmapi.c \
			ft_strnstr.c \
			ft_bzero.c \
			ft_split.c \
			ft_calloc.c \
			ft_memset.c \
			ft_memchr.c \
			ft_memcpy.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_itoa.c \
			ft_atoi.c \
			ft_putnbr_fd.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c

SRCBF 	=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c
#colours!
BLUEB	= \033[3;44m
YELLOW	= \033[0;33m
GREEN   = \033[0;32m
REDB	= \033[4;11m
RED     = \033[0;31m
REDB	= \033[1;41m
DEFU	= \033[4;39m
DEF		= \033[0;39m

SRCS	= $(addprefix ${SD}, $(SRCF))
SRCB	= $(addprefix ${BD}, $(SRCBF))
OBJS	= $(addprefix ${OD}, $(SRCF:.c=.o))
OBJB	= $(addprefix ${OD}, $(SRCBF:.c=.o))
RM		= rm -f
INCLUDE = include
LIBC	= ar -rcs
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I

$(NAME):
	@echo "$(YELLOW)$(BLUEB)Libft Archive Compiling:$(DEFU)"
	@mkdir -p ${OD}
	${CC} ${CFLAGS} ${INCLUDE} -c $(SRCS)
	@echo "$(YELLOW)$(BLUEB)Archive and Objects:$(DEFU)"
	@mv ./*.o ${OD}
	${LIBC} $(NAME) $(OBJS)
	@echo "\n$(GREEN)$(BLUEB)Compiled Libft Archive!\n$(DEFU):D\n$(DEF)$(BLUEB)Archive File: $@ $(DEF)\n"

all: $(NAME)

bonus: $(NAME)
	${CC} ${CFLAGS} $(INCLUDE) -c $(SRCB)
	@mv ./*.o ${OD}
	${LIBC} $(NAME) $(OBJB)

clean: 
	@echo "$(RED)$(REDB)DESTROYING LIBFT OBJS:$<$(DEFU)"
	$(RM)r ${OD}
	@echo "\$(GREEN)$(REDB)Destroyed!$(DEFU)$(DEF)\n"

fclean: clean
	@echo "$(RED)$(REDB)Destroying LIBFT Archive!$(DEFU)"
	$(RM) $(NAME) $(bonus)
	@echo "$(GREEN)$(REDB)Succesfully Obliterated The Archive$(DEFU):D$(DEF)\n"

re: fclean all

.PHONY: all clean fclean bonus re
