#include "main.h"
/**
 * puts2 - this function prints every other character
 *
 * @str: the character of the string to be printed
 */

void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	while (*str)
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
