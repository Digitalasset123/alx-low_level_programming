#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 *
 * Description: This function takes a string as input and prints it in reverse,
 * followed by a new line.
 */
void print_rev(char *s)
{
	int length = 0;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	/* Print the string in reverse */
	for (length = length - 1; length >= 0; length--)
		_putchar(s[length]);

	/* Print a new line */
	_putchar('\n');
}
