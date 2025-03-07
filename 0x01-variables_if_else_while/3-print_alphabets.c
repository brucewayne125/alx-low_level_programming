#include <stdio.h>
/**
 * main - Entry point to the program
 *
 * Description: This fuction prints the alphabet in lowercase and Uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	char ch = 'a';
	char uch = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (uch <= 'Z')
	{
		putchar(uch);
		uch++;
	}
	putchar('\n');
	return (0);
}
