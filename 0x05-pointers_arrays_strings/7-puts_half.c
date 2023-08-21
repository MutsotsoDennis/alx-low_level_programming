#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Return: void
 */
void puts_half(char *str)
{
int length = 0;
int start_index;

while (str[length] != '\0')
{
length++;
}

start_index = length / 2;

if (length % 2 != 0)
{
start_index = (length - 1) / 2;
}

while (str[start_index] != '\0')
{
_putchar(str[start_index]);
start_index++;
}

_putchar('\n');
}
