#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - Entry point of the program
 *
 *  Description: This function Categorizes the result
 *		from n as positive, negative or zero
 *  Return: Always zero 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
