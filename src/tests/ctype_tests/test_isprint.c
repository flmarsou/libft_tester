#include "libft_tester.h"

int	ft_isprint(int c);

static void	run_test(int start, int end, bool expected_return)
{
	for (int i = start; i <= end; i++)
	{
		if (ft_isprint(i) != expected_return)
		{
			printf(ERROR);
			return ;
		}
	}
	printf(SUCCESS);
	score++;
}

void	test_isprint(void)
{
	printf(BOLD"ft_isprint\t: ");

	// Non-printable characters before ' ' (ASCII 0-31)
	run_test(0, 31, false);
	// Printable characters ' ' to '~' (ASCII 32-126)
	run_test(32, 126, true);
	// Non-printable character 'DEL'
	run_test(127, 127, false);

	printf("\n");
}
