#include "main.h"
/**
 * _isupper - This function checks for uppercase character
 *
 * @c: parameter for the _isupper function
 *
 * Return: return either 1 for upper or 0 for other
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
