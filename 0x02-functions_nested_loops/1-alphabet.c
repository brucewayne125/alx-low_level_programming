#include "main.h"
/**
 * print_alphabet -  this function prints the alphabet in lowercase
 *
 * Description: print the alphabet in lowercase by calling print_alphabet
 */

void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz\n";

	int i = 0;

	while (alpha[i] != '\0')
	{
		_putchar(alpha[i]);
		i++;
	}
}
