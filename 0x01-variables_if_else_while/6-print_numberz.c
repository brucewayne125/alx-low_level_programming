#include <stdio.h>
/**
 * main - Entry point to the program
 *
 * Description: This function prints all singlr digits using putchar
 *
 * Return: Always 0
 */

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
