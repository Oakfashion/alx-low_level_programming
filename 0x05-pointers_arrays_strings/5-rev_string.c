#include "main.h"

/**
 * reverse_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Return: void.
 */
void reverse_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;

	while (*(s + i))
	{
		len++;
		i++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = temp;
	}
}

