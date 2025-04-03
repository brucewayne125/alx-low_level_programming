#include "main.h"
/**
 * rot13 - This function encodes a string by rotating at the 13th character
 * @str: the string to be rotated
 * Return: returns str
 */

char *rot13(char *str)
{
	char *ptr = str;
	int i;
	char arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxwzabcdefghijklm";

	while (*ptr)
	{
		for (i = 0; arr[i] != '\0'; i++)
		{
			if (*ptr == arr[i])
			{
				*ptr = rot[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
