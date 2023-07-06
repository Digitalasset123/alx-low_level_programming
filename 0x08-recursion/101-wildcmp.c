#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard support
 * @s1: The first string
 * @s2: The second string
 *
 * Return: 1 if the strings are considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* If both strings are empty, they are considered identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If s2 starts with '*', it can match any substring of s1 */
	if (*s2 == '*')
	{
		/* Recursive check: skip '*' or move s1 forward */
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
	}
	else if (*s1 == *s2)
	{
		/* Characters match, move both pointers forward */
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0); /* No match found */
}
