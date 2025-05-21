#include "main.h"
#include <stddef.h>
/**
 * _strchr - A funtion that Returns a pointer to the first occurrence
 * @s: pointer to the string s
 * @c: character we are searching for
 * Return: return s if c is found and NULL if not
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
