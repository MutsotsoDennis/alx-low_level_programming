#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned int fib1 = 1, fib2 = 2, nextFib;
int count = 2; // We already have the first two Fibonacci numbers (1 and 2)
printf("%d, %d", fib1, fib2);
while (count < 98)
{
nextFib = fib1 + fib2;
printf(", %d", nextFib);
fib1 = fib2;
fib2 = nextFib;
count++;
}
printf("\n");
return (0);
}
