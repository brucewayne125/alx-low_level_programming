#include <stdio.h>
/**
 * main - Entry point to the program
 *
 * Description: This function prints all possible combinations of three digits
 *
 * Return: Always 0
 */

int main(void)
{
	int num1 = '0';
	int num2;
	int num3;

	while (num1 <= '8')
	{
		num2 = num1 + 1;

		while (num2 <= '8')
		{
			num3 = num2 + 1;

			while (num3 <= '9')
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);

				if (num1 != '7' || num2 != '8' || num3 != '9')
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
