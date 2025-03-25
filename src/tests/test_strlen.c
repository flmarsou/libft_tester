#include "libft_tester.h"

size_t	ft_strlen(const char *str);

void	test_strlen(void)
{
	size_t	result;

	// Basic String
	result = ft_strlen("Hello World");
	if (result == 11)
		printf(SUCESS);
	else
		printf("\n%s - \"Hello World\" returned %lu instead of 8!\n", ERROR, result);

	// String with Newline Character
	result = ft_strlen("Hello\nWorld");
	if (result == 11)
		printf(SUCESS);
	else
		printf("\n%s - \"Hello\\nWorld\" returned %lu instead of 11!\n", ERROR, result);

	// String with Special Characters
	result = ft_strlen("Hello!@#$%^&*");
	if (result == 13)
		printf(SUCESS);
	else
		printf("\n%s - \"Hello!@#$%%^&*\" returned %lu instead of 13!\n", ERROR, result);

	// String with Escape Sequences
	result = ft_strlen("\a\b\t\n\v\f\r");
	if (result == 7)
		printf(SUCESS);
	else
		printf("\n%s - \"\\a\\b\\t\\n\\v\\f\\r\" returned %lu instead of 7!\n", ERROR, result);

	// String with Null Character
	result = ft_strlen("Hello\0World");
	if (result == 5)
		printf(SUCESS);
	else
		printf("\n%s - \"Hello\\0World\" returned %lu instead of 7!\n", ERROR, result);

		// Empty String
	result = ft_strlen("");
	if (result == 0)
		printf(SUCESS);
	else
		printf("\n%s - \"\" returned %lu instead of 0!\n", ERROR, result);

}
