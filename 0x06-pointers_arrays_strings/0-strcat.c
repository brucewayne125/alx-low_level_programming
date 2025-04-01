#include "main.h"
/**
 * _strcat - This function concatenates two strings
 *
 * @dest: the first string to be printed
 *
 * @src: the sting to be cancatenated to the first string
 *
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
