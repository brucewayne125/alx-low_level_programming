#include "main.h"
/**
 * reverse_array - This function reverses the elements of an array
 * @a: the array in question
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
