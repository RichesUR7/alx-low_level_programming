#include "main.h"

/**
 * _reverse_array - function name
 * @a: The array of integers to be reserved
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
	tmp = a[n - 1 - i];
	a[n - 1 - i] = a[i];
	a[i] = tmp;
	}
}
