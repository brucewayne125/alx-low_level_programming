#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	char hexnum = '0';
	char hexlet = 'a';

	while (hexnum <= '9')
	{
		putchar(hexnum);
		hexnum++;
	}
	while (hexlet <= 'f')
	{
		putchar(hexlet);
		hexlet++;
	}
	putchar('\n');
	return (0);
}
