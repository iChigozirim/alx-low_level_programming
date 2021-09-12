#include <stdio.h>
/**
 * main - main block
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
int i = 1, j = 2;
int k;
int sum;
while (j <= 4000000)
{
if (j % 2 == 0)
sum += j;
k = j;
j += i;
i = k;
}
printf("%d\n", sum);
return (0);
}

