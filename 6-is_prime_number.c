#include "main.h"
/**
 *checker - checker if a number is a prime number
 *@n: number to check
 *@i: helper variable
 *
 *Return: 1 if true else 0
 */

int checker(int n, int i)
{
	if (n == 1)
	{
		return (1);
	}

	if (i > 0 && n % i == 0)
	{
		return (0);
	}
}
