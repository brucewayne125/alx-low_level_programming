#include "main.h"
/**
 * _isalpha - this function checks for alphabetic characters
 *
 * @c: parameter for the function
 *
 * Return: Either 1 if alphabet or 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
