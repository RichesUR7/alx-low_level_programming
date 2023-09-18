#include "main.h"
/**
 * _isdigit - check if a character is a digit 0 - 9
 * @c - 1 if 'c' is a digit, 0 otherwise
 *
 * Return: 1 on success
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
