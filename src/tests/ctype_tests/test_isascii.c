#include "libft_tester.h"

int	ft_isascii(int c);

static void	run_test(int start, int end, bool expected_return)
{
	for (int i = start; i <= end; i++)
	{
		if (ft_isascii(i) != expected_return)
		{
			printf(ERROR);
			return ;
		}
	}
	printf(SUCCESS);
	score++;
}

void	test_isascii(void)
{
	printf(BOLD"ft_isascii\t: ");

	// Non-alphanumeric characters before '0' (ASCII 0-47)
	run_test(0, 47, true);
	// Digits '0' to '9' (ASCII 48-57)
	run_test(48, 57, true);
	// Non-alphanumeric characters between '9' and 'A' (ASCII 58-64)
	run_test(58, 64, true);
	// Uppercase letters 'A' to 'Z' (ASCII 65-90)
	run_test(65, 90, true);
	// Non-alphanumeric characters between 'Z' and 'a' (ASCII 91-96)
	run_test(91, 96, true);
	// Lowercase letters 'a' to 'z' (ASCII 97-122)
	run_test(97, 122, true);
	// Non-alphanumeric characters after 'z' (ASCII 123-127)
	run_test(123, 127, true);

	printf("\n");
}
