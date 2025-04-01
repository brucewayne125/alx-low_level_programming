#include "main.h"
/**
 * _strncpy - This function copies a string
 *
 * @dest: the variable that stores the copy of the string
 * @src: the string to be copied
 * @n: the nth character to which src will be copied
 * Return: return dest
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
