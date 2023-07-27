#include "main.h"

/**
 * swap_int - takes two pointers
 * and swap them
 * @a: pointer to int a
 * @b: pointer to int b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

