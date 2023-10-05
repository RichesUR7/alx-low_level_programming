#include "main.h"
#include <stdlib.h>
/**
 * create_array - function name
 * @size: parameter 1
 * @c: parameter 2
 *
 * Return: a pointer to base character c
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
