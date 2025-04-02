#include "main.h"
/**
 * cap_string - This function capitalizes a string
 * @str: the string to be capitalized
 * Return: returns str
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;
	int separators[] = " \t\n,;.!?"(){}"
	int new_word = 1;

	while (str[i] != '\0')
	{
		if (new_word && str[i] >= 'a' && str[i] <= 'z')
		{
			stri[i] -= 32;
			new_word = 0;
		} else
		{
			new_word = 0;
			for (j = 0; separators[j] != '\0'; j++)
			{
				if(str[i] == separators[j])
				{
					new_word = 1;
					break;
				}
			}
		}
		i++;
	}
	return(str);
}
