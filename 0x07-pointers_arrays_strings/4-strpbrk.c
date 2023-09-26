#include "main.h"
/**
 * _strpbrk - function name
 * @s: parameter 1
 * @accept: parameter 2
 * Return: Always 0 (Successful)
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
