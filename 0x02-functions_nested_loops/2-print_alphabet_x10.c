#include "main.h"
/**
 * print_alphabet_x10 - This function prints the alphabet ten times
 */

void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";

	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			_putchar(alpha[j]);
			j++;
		}
	}
}
