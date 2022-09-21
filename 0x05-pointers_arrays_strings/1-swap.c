#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * using two parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;
temp = *a;
*a = *b;
*b = temp;
}
