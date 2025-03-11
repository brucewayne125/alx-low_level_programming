#include <stdio.h>
/**
 * print_alphabet -  this function prints the alphabet in lowercase
 *
 * Description: print the alphabet in lowercase by calling print_alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
}
