#include "main.h"
/**
 * puts2 - this function prints every other character
 *
 * @str: the character of the string to be printed
 */

void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length - 2; i++)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
