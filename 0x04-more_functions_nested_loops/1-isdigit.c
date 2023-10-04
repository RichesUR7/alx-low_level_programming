#include "main.h"
/**
 * _isdigit - function name
 * @c: input
 *
 * Return: 1 if it's a number and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
