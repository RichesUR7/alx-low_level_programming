#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int i;
	long int l;
	long long int v;
	float f;

printf("size of a char:	%lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(v));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
