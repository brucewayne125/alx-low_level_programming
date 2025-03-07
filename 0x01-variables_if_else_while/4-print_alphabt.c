#include <stdio.h>
/**
 * main - Entry point to the program
 *
 * Description: This function prints the alphabets without e and q
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
