#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _char - print char type
 * @sp: argument
 */
void _char(va_list sp)
{
	char a = va_arg(sp, int);

	printf("%c", a);
}

/**
 * _int - print integer type
 * @sp: argument
 */
void _int(va_list sp)
{
	int a = va_arg(sp, int);

	printf("%d", a);
}

/**
 * _float - print float type
 * @sp: argument
 */
void _float(va_list sp)
{
	float a = va_arg(sp, double);

	printf("%f", a);
}

/**
 * _string - print words
 * @sp: argument
 */

void _string(va_list sp)
{
	char *a = va_arg(sp, char *);
	/* if null printt nil */
	if (a == NULL)
		printf("(nil)");
	printf("%s", a);
}
/**
 * print_all - prints any argument, follewd by new line
 * @format: argument type
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0, j = 0;
	char *spr = "";

	d_t funcs[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _string}
	};

	va_start(ptr, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + 1) != *(funcs[j].chr)))
			j++;
		if (j < 4)
		{
			printf("%s", spr);
			funcs[j].va_func(ptr);
			spr = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(ptr);
}
