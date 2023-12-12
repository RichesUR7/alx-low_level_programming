#include "main.h"

/**
 * _isalpha - returns 1 if c is a letter
 * @c: integer to be tested
 * Return: successful
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
