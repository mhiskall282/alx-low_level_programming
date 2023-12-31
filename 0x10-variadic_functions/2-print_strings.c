#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print string
 * @seperator: character for separation
 * @n: number aof argument
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list words;
	unsigned int i;
	char *str;

	va_start(words, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(words, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (seperator != NULL && i != (n - 1))
		{
			printf("%s", seperator);
		}
	}
	printf("\n");

	va_end(words);
}
