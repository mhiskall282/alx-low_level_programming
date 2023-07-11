# include "main.h"
# include  <stdio.h>
/**
 * _atoi - convert string to integers
 * @s: string to be converted
 *
 * Return: int converted form string
 */

int _atoi(char *s)
{
        int sign = 1, i = 0;
        unsigned int res = 0;

        while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
        {
                if (s[i] == '-')
                        sign *= -1;
                i++;
        }
        while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
        {
                res = (res * 10) + (s[i] - '0');
                i++;
        }
        res *= sign;
        return (res);
}

/**
 * _isdigit - check if a character is between 0 - 9
 *
 * @c: character to check
 * Return: 1 if  then character is  a number else 0
