#include "libft_tester.h"

int	ft_tolower(int c);

static void	run_test(void)
{
	for (int i = 0; i < 127; i++)
	{
		if (ft_tolower(i) != tolower(i))
		{
			printf(ERROR);
			return ;
		}
	}
	printf(SUCCESS);
	score++;
}

void	test_tolower(void)
{
	printf(BOLD"ft_tolower\t: ");

	// Applies ft_tolower to all characters
	run_test();

	printf("\n");
}
