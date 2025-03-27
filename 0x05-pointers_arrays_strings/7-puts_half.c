#include "main.h"
/**
 * puts_half - This function prints half a string
 *
 * @str: the string to be printed
 */

void puts_half(char *str)
{
	int length_of_the_string = 0;
	int i, n;

	while (str[length_of_the_string] != '\0')
	{
		length_of_the_string++;
	}

	n = (length_of_the_string + 1) / 2;

	for (i = n; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
