#include "main.h"
/**
 * _memcpy - function name
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
		return (dest);
}
