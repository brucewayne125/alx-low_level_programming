#include "main.h"
/**
 * print_triangle - This function prints a triangle using #
 *
 * @size:  is the size of the triangle
 */

void print_triangle(int size)
{
	int rows;
	int columns;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (rows = 1; rows <= size; rows++)
	{
		for (space = size - rows; space > 0; space--)
		{
			_putchar(' ');
		}
		for (columns = 1; columns <= rows; columns++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
