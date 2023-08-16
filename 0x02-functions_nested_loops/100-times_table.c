#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table
 * @n: The times table to print
 *
 * Description: Prints the multiplication table for values
 * from 0 to n, following the specified format.
 * If n is greater than 15 or less than 0, nothing is printed.
 *
 * Return: void
 */
void print_times_table(int n)
{
int row, column, product;
if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = row * column;
if (column != 0)
printf(", ");
if (product < 10)
printf("  %d", product);
else if (product < 100)
printf(" %d", product);
else
printf("%d", product);
}
printf("\n");
}
}
}
