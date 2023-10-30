#include "main.h"
/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Description: Returns 1 if c is a lowercase letter,
 *              Returns 0 otherwise.
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
