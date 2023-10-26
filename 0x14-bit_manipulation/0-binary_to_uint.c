#include "main.h"
#include <stdio.h>
/**
 * binary_to_unit - function name
 * @b: A string that takes away binary numbers
 * Return: Number that are converted
 */
unsigned int binary_to_unit(const char *b)
{
	int alx;
	unsigned int riches = 0;

	if (!b)
		return (0);
	for (alx = 0; b[alx]; alx++)
	{
		if (b[alx] < '0' || b[alx] > '1')
			return (0);
		riches = 2 * riches + (b[alx] - '0');
	}
	return (riches);
}
