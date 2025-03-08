#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Description: This function prints all possible
 *		different combinations of two digits
 *
 * Return: Always 0
 */

int main(void)
{
	int num1 = '0';
	int num2;

	while (num1 <= '8')
	{
		num2 = num1 + 1;

		while (num2 <= '9')
		{
			putchar(num1);
			putchar(num2);

			if (num1 != '8' || num2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
