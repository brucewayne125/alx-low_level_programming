#include "main.h"
/**
 * _strcmp - This function compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: return the difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
