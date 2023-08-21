#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int start, end;
	char temp;

	while (s[length] != '\0')
	{
	length++;
	}

	start = 0;
	end = length - 1;
	while (start < end)
	{
	temp = s[start];
	s[start] = s[end];
	s[end] = temp;

	start++;
	end--;
	}
}
