#include "main.h"
/**
 * _strchr - function name
 * @s: parameter s
 * @c: parameter c
 * Return: c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
		if (*s == c)
			return (s);
		return (NULL);
}
