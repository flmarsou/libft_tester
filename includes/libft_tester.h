#ifndef LIBFT_TESTER_H
# define LIBFT_TESTER_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>

# define GREEN		"\e[1;32m"
# define RED		"\e[1;31m"
# define PURPLE		"\e[1;35m"
# define RESET		"\e[0m"

# define SUCCESS		GREEN"[ OK ] "RESET
# define ERROR		RED"[ ERROR ]"RESET
# define WARN		PURPLE"[ WARNING ]"RESET

void	test_strlen(void);

#endif
