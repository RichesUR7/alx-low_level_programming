#include "main.h"
/**
 *  _strlen_recursion - function name
 *  @s: input
 *  Return: (Successful)
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
