#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to capitalize
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	bool capitalize = true;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capitalize = true;
		}
		else if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
		{
			/* Capitalize lowercase letter */
			str[i] = str[i] - 'a' + 'A';
			capitalize = false;
		}
		else
		{
			capitalize = false;
		}

		i++;
	}

	return (str);
}
