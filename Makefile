# Program Executable
EXE			:=	libft_tester

# Libraries
LIBFT		:=	libft.a

# Files
VPATH		:=	src : src/tests

SRC			:=	main.c \

TESTS		:=	test_strlen.c \

OBJ_DIR		:=	obj
SOURCES		:=	${SRC} ${TESTS}
OBJECTS		:=	${SOURCES:%.c=${OBJ_DIR}/%.o}

# Compiler Settings
CC			:=	cc
CFLAGS		:=	-Iincludes -Wall -Werror -Wextra -O2
LDFLAGS		:=	-L. -lft

all:		${EXE}

${EXE}:		${OBJECTS}
			@${CC} ${CFLAGS} ${OBJECTS} -o $@ ${LDFLAGS}

${OBJ_DIR}/%.o:	%.c | obj
			@${CC} ${CFLAGS} -c $< -o $@

obj:
			@mkdir -p ${OBJ_DIR}

clean:
			@rm -rf ${OBJ_DIR}

fclean:		clean
			@rm -rf ${EXE} ${EXE}.log

re:			fclean all

.PHONY:		all clean fclean re
