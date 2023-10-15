#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @f: function pointer that takes a char pointer as a parameter
 * @name: pointer to the name to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
