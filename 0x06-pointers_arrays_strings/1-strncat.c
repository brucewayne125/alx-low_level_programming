#include "main.h"
/**
 * _strncat - This function concatenates two strings but for n bytes
 *
 * @dest: the first string
 * @src: the string to be concatenated
 * @n: the number of bytes that is to be used from src
 * Return: returns dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
