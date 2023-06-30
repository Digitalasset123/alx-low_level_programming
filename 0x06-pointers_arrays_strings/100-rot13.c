#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @s: The string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *ptr = s;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s)
	{
		char *tmp = alpha;
		char *rot = rot13;
		int found = 0;

		while (*tmp && !found)
		{
			if (*s == *tmp)
			{
				*s = *rot;
				found = 1;
			}
			tmp++;
			rot++;
		}
		s++;
	}
	return (ptr);
}
