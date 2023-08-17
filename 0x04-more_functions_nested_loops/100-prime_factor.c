#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
unsigned long int num = 612852475143;
unsigned long int i;

for (i = 2; i <= sqrt(num); i++)
{
while (num % i == 0)
{
num /= i;
}
}
if (num > 1)
{
printf("%lu\n", num);
}
else
{
printf("%lu\n", i - 1);
}
return (0);
}
