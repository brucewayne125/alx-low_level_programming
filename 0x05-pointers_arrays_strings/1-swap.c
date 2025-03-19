#include "main.h"
/**
 * swap_int - This function swaps the values of two integers.
 * @a: points to the first int type variable
 * @b: points to the second int type variable
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
