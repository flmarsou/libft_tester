#include "libft_tester.h"

int	score = 0;

static void	print_score()
{
	if (score < 100)
	{
		printf(BOLD"╔═══════════════╗\n"RESET);
		printf(BOLD"║    %3d/133    ║\n"RESET, score);
		printf(BOLD"╚═══════════════╝\n"RESET);
	}
	else
	{
		printf(BOLD"╔═══════════════╗\n"RESET);
		printf(BOLD"║    %d/133    ║\n"RESET, score);
		printf(BOLD"╚═══════════════╝\n"RESET);
	}
}

int	main(void)
{
	printf(BOLD"Functions from <ctype.h>\n"RESET);
	test_isalnum();	// 7 Tests
	test_isalpha();	// 7 Tests
	test_isascii();	// 7 Tests
	test_isdigit();	// 7 Tests
	test_isprint();	// 3 Tests
	test_tolower();	// 1 Tests
	test_toupper();	// 1 Tests

	print_score();

	return (0);
}
