#include <stdio.h>
int main(void)
{
int total_sum = 0;
for (int i = 0; i < 1024; i++) {
if (i % 3 == 0 || i % 5 == 0) {
total_sum += i;
}
}
printf("%d\n", total_sum);
return (0);
}
