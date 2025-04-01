#include "main.h"
/**
 * string_toupper - This function converts a string from lower to uppercase
 * @str: the string to be converted
 * Return: return str
 */

char *string_toupper(char *str)
{
	int i;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
