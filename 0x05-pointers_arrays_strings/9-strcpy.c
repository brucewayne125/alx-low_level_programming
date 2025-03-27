#include "main.h"
/**
 * _strcpy - This function copies the sring to a buffer
 *
 * @dest: the buffer
 * @src: the string to be copied
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
