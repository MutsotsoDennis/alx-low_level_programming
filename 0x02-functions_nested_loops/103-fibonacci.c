#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int fib1 = 1, fib2 = 2, nextFib, sum = 0;
while (fib2 <= 4000000)
{
if (fib2 % 2 == 0)
{
sum += fib2;
}
nextFib = fib1 + fib2;
fib1 = fib2;
fib2 = nextFib;
}
printf("%ld\n", sum);
return (0);
}
