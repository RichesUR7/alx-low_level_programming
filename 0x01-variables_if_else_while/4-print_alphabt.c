#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	        if (letter != 'e' && != 'q')
			putchar(letter);
	putchar('\n');
	return (0);
}
