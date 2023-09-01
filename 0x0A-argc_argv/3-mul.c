#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)

{

	int i = 0;
	int sign = 1;
	int result = 0;
	int len = 0;

	while (s[len] != '\0')
	len++;

	while (i < len && (s[i] == ' ' || s[i] == '\t'))
	i++;

	if (s[i] == '-')
	{
	sign = -1;
	i++;
	}

	while (i < len && s[i] >= '0' && s[i] <= '9')
	{
	result = result * 10 + (s[i] - '0');
	i++;
	}

	return (result * sign);
}
