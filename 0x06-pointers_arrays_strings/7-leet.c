#include "main.h"
/**
 * leet - this function replaces ertain characters of a string
 *
 * @str: the string to be replaced
 * Return: returns str
 */

char *leet(char *str)
{
	char *ptr = str;
	char arr[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int i = 0;

	while (*ptr)
	{
		for (i = 0; i < 10; i++)
		{
			if (*ptr == arr[i])
			{
				*ptr = num[i];
			}
		}
		ptr++;
	}
	return (str);
}
