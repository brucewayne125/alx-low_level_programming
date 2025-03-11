#include "main.h"
/**
 * _islower - This function checks for lower case characters
 *
 * @c: the parameter for the function islower
 *
 * Return: returns 1 if c is lowercase and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
