#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The string to print
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	start = (length - 1) / 2 + 1;

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
