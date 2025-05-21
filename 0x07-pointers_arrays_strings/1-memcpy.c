#include "main.h"
/**
 * _memcpy - A function which copies n bytes
 * from memory src to memory area dest
 * @dest: Memory area to which n bytes are copied to
 * @src: Memory area which contains the n bytes to be copied
 * @n: the number of bytes to be copied
 *
 * Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
