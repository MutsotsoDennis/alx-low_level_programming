#include <stdio.h>
int main(void)
{
int count = 2;
long long fib1 = 1, fib2 = 2, nextFib;
printf("%lld, %lld", fib1, fib2);
while (count < 50)
{
nextFib = fib1 + fib2;
printf(", %lld", nextFib);
fib1 = fib2;
fib2 = nextFib;
count++;
}
printf("\n");
return (0);
}
