#include "main.h"
/**
 * _strncat - function name
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int i;

for (i = 0; i < n && *src != '\0'; i++)
{
	dest[len + i] = *src;
	src++;
}
	dest[len + i] = '\0';
	return (dest);
}
