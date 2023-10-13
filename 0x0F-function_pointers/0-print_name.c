#include "function_pointers.h"
/**
 * print_name - function name
 * @f: variable to hold the string name
 * @name: name of the person
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
