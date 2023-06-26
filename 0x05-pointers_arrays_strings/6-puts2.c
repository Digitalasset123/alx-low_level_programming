#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be processed
 *
 * Description: This function takes a string as input and prints every other
 * character of the string, starting from the first character.
 * The output is followed by a new line.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
