#include "main.h"
/**
 * _atoi - this function converts a string to an integer
 *
 * @s: the string to be converted
 * Return: the product of the integer and the sign
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int started = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		} else if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			started  = 1;
		} else if (started)
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
