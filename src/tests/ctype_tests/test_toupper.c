#include "libft_tester.h"

int	ft_toupper(int c);

static void	run_test(void)
{
	for (int i = 0; i < 127; i++)
	{
		if (ft_toupper(i) != toupper(i))
		{
			printf(ERROR);
			return ;
		}
	}
	printf(SUCCESS);
	score++;
}

void	test_toupper(void)
{
	printf(BOLD"ft_toupper\t: ");

	// Applies ft_toupper to all characters
	run_test();

	printf("\n");
}
