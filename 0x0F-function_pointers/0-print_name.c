#include "function_pointers.h"
#include <stdio.h>

/*
 * function that prints a name
*/


void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
