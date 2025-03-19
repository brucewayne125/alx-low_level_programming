#include "main.h"
/**
 * _strlen - This function returns the length of a string
 * @s: Points to the string of char type
 * Return: Te length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
