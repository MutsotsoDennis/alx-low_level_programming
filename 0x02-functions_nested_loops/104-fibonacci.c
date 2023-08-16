#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Calculates and prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count, n1 = 1, n2 = 2, next;
printf("%d, %d", n1, n2);
for (count = 2; count < 98; ++count)
{
next = n1 + n2;
printf(", %d", next);
n1 = n2;
n2 = next;
}
printf("\n");
return (0);
}
