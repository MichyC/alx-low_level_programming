#include "main.h"

/**
 * swap_int - take in two variable integers and swaps them
 * @a: int a
 * @b: int b
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
