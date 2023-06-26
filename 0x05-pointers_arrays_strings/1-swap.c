#include "main.h"

/**
 * swap_int - swaps the values of *a and *b.
 *
 * @a: 1st integer
 * @b: 2nd Integer
 *
 * Return: Zero
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
