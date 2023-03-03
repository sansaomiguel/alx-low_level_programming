#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp, s;

	for (s = n - 1; s >=n/2; s--)
	{
		temp = a[n - 1 - s];
		a[n - 1 - s] = a[s];
		a[s] = temp;
	}
}
