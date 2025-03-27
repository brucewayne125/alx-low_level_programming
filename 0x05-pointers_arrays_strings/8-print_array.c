#include "main.h"
#include "stdio.h"
/**
 * print_array - This function n elements of an arrayof integers
 *
 * @a: an array of integers
 * @n: tghe number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int array = a[i];

		printf("%d", array);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
