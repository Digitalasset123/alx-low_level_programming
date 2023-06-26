#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Description: This function takes a string as input and reverses the order
 * of its characters in-place.
 */
void rev_string(char *s)
{
	int i, length;
	char temp;

	/* Calculate the length of the string */
	length = 0;
	while (s[length] != '\0')
		length++;

	/* Swap characters from both ends of the string */
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
