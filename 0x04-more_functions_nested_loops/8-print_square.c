#include "main.h"
/**
 * print_square - This function prints a square followed by a new line
 *
 * @size:  is the size of the square
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
