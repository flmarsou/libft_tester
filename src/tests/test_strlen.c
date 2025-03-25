#include "libft_tester.h"

size_t	ft_strlen(const char *str);

static void	run_test(const char *input, size_t expected)
{
	size_t	result;

	result = ft_strlen(input);
	if (result == expected)
		printf(SUCCESS);
	else
		printf("\n%s - \"%s\" returned %lu instead of %lu!\n", ERROR, input, result, expected);
}

void	test_strlen(void)
{
	run_test("Hello World", strlen("Hello World"));		// Basic String
	run_test("Hello\nWorld", strlen("Hello\nWorld"));	// String with Newline Character
	run_test("Hello!@#$%^&*", strlen("Hello!@#$%^&*"));	// String with Special Characters
	run_test("\a\b\t\n\v\f\r", strlen("\a\b\t\n\v\f\r"));	// String with Escape Sequences
	run_test("Hello\0World", strlen("Hello\0World"));	// String with Null Character
	run_test("", strlen(""));				// Empty String
}
