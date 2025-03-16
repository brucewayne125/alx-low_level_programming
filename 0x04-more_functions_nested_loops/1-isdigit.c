#include "main.h"
/**
 * _isdigit - This function checks for a digit 0 through 9
 *
 * @c: Parameter for the function _isdigit
 *
 * Return: return either 1 if the digit is between 0 and 9 or 0 if not
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
