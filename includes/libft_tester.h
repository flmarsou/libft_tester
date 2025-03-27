#ifndef LIBFT_TESTER_H
# define LIBFT_TESTER_H

# include <unistd.h>
# include <stdio.h>
# include <stdbool.h>
# include <ctype.h>
# include <string.h>

# define BOLD		"\e[1m"
# define GREEN		"\e[1;32m"
# define RED		"\e[1;31m"
# define PURPLE		"\e[1;35m"
# define RESET		"\e[0m"

# define SUCCESS	GREEN"[ OK ] "RESET
# define ERROR		RED"[ KO ] "RESET
# define WARN		PURPLE"[ WARNING ] "RESET

# define SCORE_MAX	

extern int	score;

void	test_strlen(void);
void	test_isalnum(void);
void	test_isalpha(void);
void	test_isascii(void);
void	test_isdigit(void);
void	test_isprint(void);
void	test_tolower(void);
void	test_toupper(void);

#endif
