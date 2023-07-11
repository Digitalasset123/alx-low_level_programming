#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string.
 *
 * Description: This function takes a pointer to a string as a parameter
 * and prints the characters of the string followed by a new line.
 *
 * Return: None.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
