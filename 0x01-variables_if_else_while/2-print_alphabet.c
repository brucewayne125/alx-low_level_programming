#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Description: This function prints the alphabet in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	while (ch < 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
